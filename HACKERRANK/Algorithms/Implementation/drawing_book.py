#!/bin/python

import sys
import math

n = int(raw_input().strip())
p = int(raw_input().strip())
print(min(p//2,(n-p+1-(n%2))//2))
