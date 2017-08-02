while True:
    try:
        num = int(raw_input())
        str_list = []
        while num>0:
            num -= 1
            str_list.append(raw_input())
        str_list.sort()
        print('----------')
        for a in str_list:
            print(a)
    except Exception:
        pass
