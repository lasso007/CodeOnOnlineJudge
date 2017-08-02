def test(cmd):
    def _exec(func):
        def __exec(*args, **kwargs):
            print("It's a {}".format(cmd))
            print("Begin calling")
            add(*args, **kwargs)
        return __exec
    return _exec

def add(*args, **kwargs):
    print(sum(args)+sum(kwargs))
    print("OK")

f = test("hello")(add)(1,2)

#f()
