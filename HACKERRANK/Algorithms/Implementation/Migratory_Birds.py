#!/bin/python

import sys
from collections import Counter

n = int(raw_input().strip())
types = map(int, raw_input().strip().split(' '))
cnt = Counter(types)
print cnt.most_common(1)[0][0]
