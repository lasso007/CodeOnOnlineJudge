#coding=utf-8
import math
PI = math.pi 
#PI = 3.1415 

def func(x,y):
    return (x**2+y**2-1)**3-(x**2)*(y**3)

def Norm(x, mu, sigma):
    return (math.e)**(-(x-mu)**2/(2*sigma**2))/(math.sqrt(2*PI)*sigma)

def Main(mu1, sigma1, mu2, sigma2):
    R = list(x*1.0/100 for x in range(-100,100))
    result = 0
    num = 0
    for x in R:
        for y in R:
            if(func(x,y)<=0):
                num += 1
                result += Norm(x, mu1, sigma1)*Norm(y, mu2, sigma2)
    result *= 0.0001
    print(num)
    print("{:.1f}".format(result))

if __name__=='__main__':
    mu1 = 0.5
    sigma1 = 10
    mu2 = 2
    sigma2 = 1
    Main(mu1, sigma1, mu2, sigma2)
