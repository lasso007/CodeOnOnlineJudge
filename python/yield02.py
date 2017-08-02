def f():
    m = yield 1
    print("type(m):",m,"value(m):",m)
    m = yield 2
    print("type(m):",m,"value(m):",m)
    m = yield 3
    print("type(m):",m,"value(m):",m)
    m = yield 4
    print("type(m):",m,"value(m):",m)
    m = yield 5
    print("type(m):",m,"value(m):",m)

c = f()
c.next()
c.next()
c.next()
