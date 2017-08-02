def test(cmd):
    def _exec(func):
       def __exec(*args,**kwargs):
           print("It's a {}".format(cmd))
           print("sum: ")
           print(sum(args)+sum(kwargs))
           func(*args, **kwargs)
       return __exec
    return _exec

@test("hello")
def add1(*args, **kwargs):
    print("OK!")

@test("world")
def add2(*args, **kwargs):
    print("Finish!")

add1(1,2)
add1(1,2,3)
print('################')
add2(1,2)
add2(1,2,3)
