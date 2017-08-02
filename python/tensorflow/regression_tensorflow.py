#coding=utf-8
import tensorflow as tf
import numpy as np

# create 100 random x, y data points
x_data = np.random.random((10,2))
x_data = np.array(x_data, dtype=np.float32)
y_data = x_data.dot(np.array([0.3, 0.8])) + 0.4


W = tf.Variable(tf.random_uniform([2,1], -1.0, 1.0))
b = tf.Variable(tf.zeros(1))
y = tf.matmul(tf.cast(x_data,"float"), W) + b
#y = tf.matmul(tf.cast(x_data,"float"), W) + b

#loss = tf.reduce_mean(tf.square(y - y_data)) + 0.1*tf.reduce_sum(tf.abs(W))
loss = tf.reduce_mean(tf.square(y - y_data))
optimizer = tf.train.GradientDescentOptimizer(0.4)
train = optimizer.minimize(loss)

sess = tf.Session()
sess.run(tf.initialize_all_variables())

for step in range(300):
    sess.run(train)
    if step%20 == 0:
        print(step, sess.run(W), sess.run(b), "loss:", sess.run(loss))

