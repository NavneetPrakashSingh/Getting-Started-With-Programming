#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue May  1 09:21:43 2018

@author: hp
"""

#hackerrank | seperate the numbers | https://www.hackerrank.com/challenges/separate-the-numbers/problem

def separateNumbers(s):
    # Complete this function
    #numberList = list()
    #for values in range(100):
    #    numberList.append(values)
    print(sorted(s))
    if(sorted(s)):
        print("sorted")
    else:
        print("not sorted")
    
    
    

if __name__ == "__main__":
    q = int(input().strip())
    for a0 in range(q):
        s = input().strip()
        separateNumbers(s)