"""
# bogus.py
#
# Bogus example of a generator that produces and receives values

def countdown(n):
    print "Counting down from", n
    while n >= 0:
        newvalue = (yield n)
        # If a new value got sent in, reset n with it
        if newvalue is not None:
            n = newvalue
        else:
            n -= 1

# The holy grail countdown
c = countdown(5)
for x in c:
    print x
    if x == 5:
        c.send(3)
"""
def h():
    print("hello")
    m = yield 5
    print("type(m): ",m)
    d = yield 6
    #print("we are together.")

c = h()
c.send(None)
c.send("I send a message.")
#c.send("I send another message.")
#c.next()

