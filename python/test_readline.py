#coding=utf-8
import sys
import pdb
def maxlcp(s):
    Len = len(s)+1
    dp = [[0]*Len]*Len
    for i in range(1,Len):
        for j in range(1,Len):
            #print(i,j)
            if s[i-1]==s[Len-1-j]:
                dp[i][j] = dp[i-1][j-1]+1
            else:
                dp[i][j] = max(dp[i-1][j], dp[i][j-1])
    return len(s)-dp[Len-1][Len-1]

while True:
    s = sys.stdin.readline().strip()
    print(maxlcp(s))
