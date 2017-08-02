def foo(func):
    def wrapper():
        print('foo')
        func()
    return wrapper

def func_a():
    print('func_a')

func_a = foo(func_a)
func_a()
func_a()
func_a()
"""
def foo(func):
    print('foo')
    func()

@foo
def func_a():
    print('func_a')
"""
