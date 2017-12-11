#!/bin/python3

import sys


size = map(int,raw_input().split())
word = [size[ord(c)-ord('a')] for c in raw_input()]
print max(word)*len(word)
