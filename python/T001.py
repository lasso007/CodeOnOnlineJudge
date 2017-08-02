#coding=utf-8
# 洗牌
# http://www.nowcoder.com/question/next?pid=2385858&qid=46126&tid=6021862

while True:
    try:
        num = int(raw_input())
        res = []
        while num>0:
            num -= 1
            n,k = map(int, raw_input().split())
            s = raw_input()
            s = map(int, s.split(' ')[:2*n])
            #s = s + map(lambda x:x+n,s)
            while k>0:
                k -= 1
                t =[]
                for i in range(n):
                    t.append(s[i])
                    t.append(s[i+n])
                s = t
            res.append(' '.join(map(str, s)))
            #print(' '.join(map(str, s)))
        for r in res:
            print(r)
    except EOFError:
        break
