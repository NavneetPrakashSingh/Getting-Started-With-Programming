#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue May  1 08:36:11 2018

@author: hp
"""

# hackerrank | alternate-character | https://www.hackerrank.com/challenges/alternating-characters/problem

#!/bin/python3

import sys

def alternatingCharacters(s):
    # Complete this function
    count = 0
    index = 0
    previousChar = s[0]
    for values in s:
        if(index ==0):
            index = index + 1
            continue
        else:
            if(values == previousChar):
                count = count + 1
            previousChar = values
            
    return count
                
            
        

q = int(input().strip())
for a0 in range(q):
    s = input().strip()
    result = alternatingCharacters(s)
    print(result)
