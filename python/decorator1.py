#coding = utf-8
def deco(arg):
     def _deco(func):
         def __deco(a,b):
             print("Before {0} is callef [{1}]".format(func.__name__,arg))
             func(a,b)
             print("After {0} is called [{1}]".format(func.__name__,arg))
         return __deco
     return _deco
@deco("mymodule")
def myfunc(a,b):
    print("a+b=",a+b)
    print("myfunc() is called")
@deco("mymodule2")
def myfunc2(a,b):
    print("a-b=",a-b)
    print("myfunc2() is called")


print("First Called...")
myfunc(6,2)
myfunc2(6,2)

print("#######################")
print("Second Called...")
myfunc(8,3)
myfunc2(8,3)
