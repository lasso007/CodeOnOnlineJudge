#coding=utf-8
import math
import matplotlib.pyplot as plt
d = list(i*1.0/100 for i in range(0,200))
data = []
for x in d:
    t = 4-3*x*x
    if t<0:
        continue
    y1 = (x+math.sqrt(t))*0.5
    y2 = (x-math.sqrt(t))*0.5
    data.append([x,y1])
    data.append([x,y2])
d = list([-x[0],x[1]] for x in data)
data.extend(d)
x = list(x[0] for x in data)
y = list(x[1] for x in data)
plt.scatter(x,y,marker='o')
plt.title("(x**2+y**2-1)**2=(xy)**2")

d = list(i*1.0/100 for i in range(-200,200))
data = []
for x in d:
    for y in d:
        if ((x**2+y**2-1)**2<=(x*y)**2):
        #if ((x**2+y**2-1)**2<=(x*y)**2 or (abs(x)<=1 and abs(y)<=1)):
            data.append([x,y])
plt.scatter(list(x[0] for x in data), list(x[1] for x in data),marker='*')

plt.show()
