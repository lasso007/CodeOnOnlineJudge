# -*- coding:utf-8 -*-

##################
### implement some test about class
### yuting
### 2017/02
##################

class Base1:
        def __init__(self):
                print "Base1"
        def test(self):
                print "Base1 test"

class Base2: 
        def __init__(self):
                print "Base2"
        def test(self):
                print "Base2 test"


class MyBase(Base2,Base1):
        def __init__(self):
                Base1.__init__(self)
                Base2.__init__(self)

if __name__=="__main__":
        a=MyBase()
