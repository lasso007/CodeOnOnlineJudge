#coding=utf-8
import glob
import os
import random
import numpy as np

class load_data(object):
    def __init__(self, file_path, batchN=0):
        self.N = batchN
        self.all_files = glob.glob(os.path.join(file_path,"*jpg"))
        if batchN<1 or len(self.all_files)<batchN:
            raise AssertionError("Bad parameters!")
        #self.pre_load = []
    def read_data(self):
        while True:
            np.random.shuffle(self.all_files)
            file_names = self.all_files[:self.N]
            yield file_names

"""
dataset = load_data.load_data("/media/hys/Temporary Files/Image",15).read_data()
dataset.next()
"""
