#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue May  1 07:08:29 2018

@author: hp
"""

#hackerrank | gemstone problem | https://www.hackerrank.com/challenges/gem-stones/problem

def gemstones(arr):
    # Complete this function
    finalListArray = set(arr[0])
    index =0   
    for values in arr:
        if(index == 0):            
            index =index + 1
            continue
        else:
            listArray = set(values)                 
            finalListArray = listArray.intersection(finalListArray)        
        
    return len(finalListArray)
        

n = int(input().strip())
arr = []
arr_i = 0
for arr_i in range(n):
   arr_t = str(input().strip())
   arr.append(arr_t)
result = gemstones(arr)
print(result)