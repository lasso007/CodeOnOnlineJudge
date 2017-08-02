"""
def controlled_execution(callback):
    print("begin")
    try:
        callback(a,b)
    finally:
        print("OK!")
def add(a,b):
    print(a+b)

controlled_execution(add)(2,3)
"""
class Sample:
    def __enter__(self):
        print "In __enter__()"
        return "Foo" 
    def __exit__(self, type, value, trace):
        print "In __exit__()"
 
 
def get_sample():
    print("In sample function.")
    return Sample()
 
 
with get_sample() as sample:
    print ("sample:",sample)
