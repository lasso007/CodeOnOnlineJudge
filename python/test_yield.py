def countdown(n):
    print "conunting down form" ,n
    while n>=0:
        print "first n:",n 
        newvalue=(yield n)
        print('###################')
        print "second n:",n 
        print "first newvalue",newvalue

        if newvalue is not None:
            n=newvalue
        else:
            n-=1

        #print "second newvalue",newvalue

c=countdown(5)
for n in c:
    print("n:",n) 
    if n==5:
        c.send(3)
