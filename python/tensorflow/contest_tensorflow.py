#coding=utf-8
import tensorflow as tf
import random
import numpy as np
import pdb

trainSet=[(-0.5,12,0),(0.5,13.2,1),(0.8,8,0),(1,9,1),(1.3,6.5,1),(1.5,5,1), \
        (1.7,3,0),(2.0,1.5,0),(2.2,2,1) ,(2.5,1,1),(3,-1.3,0),(3.3,0.5,1), \
        (3.5,1.5,1),(3.8,1.1,0),(4.1,2.8,1),(4.5,5.1,1), (4.9,6.8,0), \
        (5.7,14.1,0),(6.2,21.2,1)]

testSet=[(0.7,11.1,1),(1.3,5.2,0),(1.7,3.0,0),(2.2,1.5,1),(2.6,0.5,1),
        (3.2,-0.7,0),(3.7,1.3,1),(4.3,3.5,1),(4.9,6.8,0),(5.5,13.2,1)]

def one_hot_coding(init_labels, n=2):
    result = []
    for x in init_labels:
        L = [0,0]
        L[x] = 1
        result.append(L)
    return result

if __name__=='__main__':
    trainData = np.array(list(x[0:-1] for x in trainSet))
    trainLabels = one_hot_coding(list(x[-1] for x in trainSet))
    testData = np.array(list(x[0:-1] for x in testSet))
    testLabels = one_hot_coding(list(x[-1] for x in testSet))
    #pdb.set_trace()
    x = tf.placeholder(tf.float32, [None, 2])
    y = tf.placeholder(tf.float32, [None, 2])
    W1 = tf.Variable(tf.truncated_normal([2,1], stddev=0.1))
    b1 = tf.Variable(tf.truncated_normal([1], stddev=0.1))
    #W1 = tf.Variable(tf.zeros([2,1]))
    #b1 = tf.Variable(tf.zeros([1]))
    lam = tf.Variable(tf.truncated_normal([1], stddev=0.1))
    u = tf.mul(0.6, tf.square(tf.matmul(x,W1)+b1))
    #u = tf.mul(0.2, tf.square(tf.matmul(x,W1)+b1))

    W2 = tf.Variable(tf.truncated_normal([1,2],stddev=0.1))
    b2 = tf.Variable(tf.truncated_normal([2],stddev=0.1))
    
    y_ = tf.nn.softmax(tf.matmul(u, W2)+b2)

    cross_entropy = -tf.reduce_sum(y*tf.log(y_))
    train_step = tf.train.GradientDescentOptimizer(0.01).minimize(cross_entropy)
    correct_prediction = tf.equal(tf.argmax(y,1), tf.argmax(y_,1))
    accuracy = tf.reduce_mean(tf.cast(correct_prediction, tf.float32))
    init = tf.initialize_all_variables()
    sess = tf.Session()
    sess.run(init)
    index = range(len(trainData))
    N = 10
    for i in range(1000):
        random.shuffle(index)
        batch_xs = list(trainData[x] for x in index[:N])
        batch_ys = list(trainLabels[x] for x in index[:N])
        sess.run(train_step, feed_dict={x:batch_xs, y:batch_ys})
        accu = sess.run(accuracy, feed_dict={x:testData,  y:testLabels})
        print("accuracy:{}".format(accu))

    sess.close()



