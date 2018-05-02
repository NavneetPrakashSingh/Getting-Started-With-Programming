#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed May  2 10:04:14 2018

@author: hp
"""

#substring in string | hackerrank | https://www.hackerrank.com/challenges/beautiful-binary-string/problem

def beautifulBinaryString(b):
    # Complete this function
    substring = "010"
    finalString = b
    count = 0
    for values in range(len(finalString)):
        if(finalString[values:values+3] == "010"):
            count = count + 1
    
    return count


if __name__ == "__main__":
    n = int(input().strip())
    b = input().strip()
    result = beautifulBinaryString(b)
    print(result)