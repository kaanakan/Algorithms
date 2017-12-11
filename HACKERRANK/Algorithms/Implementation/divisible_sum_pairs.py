#!/bin/python

import sys
import itertools

n,k = raw_input().strip().split(' ')
n,k = [int(n),int(k)]
a = map(int,raw_input().strip().split(' '))
b = list(itertools.combinations(a,2))
print (sum([1 for i in b if (i[0]+i[1])%k ==0]))
