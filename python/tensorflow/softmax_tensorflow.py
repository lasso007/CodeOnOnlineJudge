#coding=utf-8
import tensorflow as tf

if __name__=='__main__':
    import tensorflow.examples.tutorials.mnist.input_data as input_data
    mnist = input_data.read_data_sets("../../data/",one_hot=True)
    x = tf.placeholder(tf.float32, [None, 784])
    y = tf.placeholder(tf.float32,[None,10])
    #W = tf.Variable(tf.zeros([10, 784]))
    W = tf.Variable(tf.zeros([784, 10]))
    b = tf.Variable(tf.zeros([10]))
    y_ = tf.nn.softmax(tf.matmul(x,W) + b)
    cross_entropy = -tf.reduce_sum(y*tf.log(y_))
    train_step = tf.train.GradientDescentOptimizer(0.01).minimize(cross_entropy)
    init = tf.initialize_all_variables()
    sess = tf.Session()
    sess.run(init)
    for i in range(1000):
        batch_xs, batch_ys = mnist.train.next_batch(100)
        sess.run(train_step, feed_dict={x: batch_xs, y: batch_ys})
        correct_prediction = tf.equal(tf.argmax(y,1), tf.argmax(y_,1))
        accuracy = tf.reduce_mean(tf.cast(correct_prediction, tf.float32))
        print(sess.run(accuracy, 
            feed_dict={x: mnist.test.images, y: mnist.test.labels}))
    sess.close()
