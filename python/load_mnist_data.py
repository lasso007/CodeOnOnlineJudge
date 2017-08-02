#coding=utf-8
import struct
import os
def extract_images(file_path):
    row = 28
    col = 28
    data = []
    with open(file_path,'rb') as f:
        d = f.read(16)[4:8]
        image_num = struct.unpack('>i',d)[0]
        while True:
            #raw_data = list(x for x in f.read(row*col))
            raw_data = f.read(row*col)
            if(len(raw_data)==row*col):
                data.append(list(struct.unpack('B',x)[0] for x in raw_data))
            else:
                break
    print("image_size:{0}*{1}".format(row,col))
    print("images number:{}".format(image_num))
    print("images loaded number:{}".format(len(data)))
    return data

def extract_labels(file_path):
    data = []
    with open(file_path,'rb') as f:
        d = f.read(8)[4:]
        labels_num = struct.unpack('>i',d)[0]
        raw_data = f.read(labels_num)
        data = list(struct.unpack('b',x)[0] for x in raw_data)
    print("labels number:{}".format(labels_num))
    return data

def load_data():
    #dataset_path = '/home/hys/workspace/caffe-master/data/mnist/'
    dataset_path = '/home/hys/workspace/C++/data/'
    train_data_files = ['train-images-idx3-ubyte','train-labels-idx1-ubyte']
    test_data_files = ['t10k-images-idx3-ubyte','t10k-labels-idx1-ubyte']
    #load train images and labels
    train_images = extract_images(os.path.join(dataset_path, train_data_files[0]))
    train_labels = extract_labels(os.path.join(dataset_path, train_data_files[1]))
    #load test images and labels
    test_images = extract_images(os.path.join(dataset_path, test_data_files[0]))
    test_labels = extract_labels(os.path.join(dataset_path, test_data_files[1]))
    return train_images,train_labels,test_images,test_labels
"""
if __name__=='__main__':
    load_data()
"""
