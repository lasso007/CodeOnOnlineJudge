#coding = utf-8
def deco(arg):
     def _deco(func):
         #def __deco():
         print("Before {0} is called [{1}]".format(func.__name__,arg))
         func()
         print("After {0} is called [{1}]".format(func.__name__,arg))
         #return __deco
     return _deco
@deco("mymodule")
def myfunc():
    print("myfunc() is called")
@deco("mymodule2")
def myfunc2():
    print("myfunc2() is called")


print("First Called...")
myfunc()    # error
myfunc2()
"""
print('#############################')
print("Second Called...")
myfunc()
"""
myfunc2()
