#coding=utf-8
import numpy as np

def calc_ent(x):
    """
        calculate shanno entropy of x
    """
    ent = 0.0
    x_len = len(x)
    for x_value in set(x):
        p = len([i for i in x if i==x_value])*1.0/x_len
        logp = np.log2(p)   # logp = math.log(p,2)
        ent -= p*logp
    return ent

def calc_condition_ent(x, y):
    """
        calculate condition entropy H(y|x)
    """
    ent = 0.0
    x_len = len(x)
    for x_value in set(x):
        y_sub = list(y[i] for i in range(x_len) if x[i]==x_value)
        ent_temp = calc_ent(y_sub)
        ent += (len(y_sub)*1.0/x_len)*ent_temp
    return ent

def calc_ent_grap(x,y):
    """
        calc_ent_grap(x,y)
    """
    base_ent = calc_ent(y)
    condition_ent = calc_condition_ent(x, y)
    return base_ent-condition_ent




x = [1,1,1,2,1,4,2]
y = [0,0,0,1,1,2,3]
#print(calc_ent(x))
print(calc_ent_grap(x,y))
