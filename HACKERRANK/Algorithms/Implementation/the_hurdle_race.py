#!/bin/python

import sys


n,k = raw_input().strip().split(' ')
n,k = [int(n),int(k)]
height = map(int, raw_input().strip().split(' '))
sums=0
for i in range(n):
    if k<height[i]:
        temp=height[i]-k
        sums+=temp
        k+=temp
print sums
