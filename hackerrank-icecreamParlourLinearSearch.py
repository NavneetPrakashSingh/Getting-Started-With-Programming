#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu May 10 11:31:59 2018

@author: hp
"""

#icecreamParlourLinearSearch | hackerrank | https://www.hackerrank.com/challenges/icecream-parlor/problem
def icecreamParlor(m, arr):
    # Complete this function
    totalValue = m
    lengthOfArray = len(arr)
    for values in range(0,lengthOfArray):
        index = values
        otherValue = totalValue - arr[values]
        for otherValues in range(0,lengthOfArray):
            if(otherValues == index):
                pass
            else:
                if(arr[otherValues] == otherValue):
                    otherIndex = otherValues
    
    print("value is ",index,"Other index is", otherIndex)

if __name__ == "__main__":
    t = int(input().strip())
    for a0 in range(t):
        m = int(input().strip())
        n = int(input().strip())
        arr = list(map(int, input().strip().split(' ')))
        result = icecreamParlor(m, arr)
        print (" ".join(map(str, result)))