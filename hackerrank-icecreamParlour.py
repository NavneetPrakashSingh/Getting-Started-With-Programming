#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed May  9 08:50:04 2018

@author: hp
"""

#icecream parlour | hackerrank | https://www.hackerrank.com/challenges/icecream-parlor/problem
def recursiveBinarySearch(arr,minValue,maxValue,valueToBeSearched):   
    if(maxValue<minValue):
        return "Value Not Found"
    else:        
        midValue = int((minValue + maxValue)/2)
        valueToFind = valueToBeSearched -midValue
        if(arr[int(midValue)]>valueToFind):
            return recursiveBinarySearch(arr,0,midValue,valueToBeSearched)
        elif(arr[int(midValue)]<valueToFind):
            return recursiveBinarySearch(arr,midValue,maxValue,valueToBeSearched)
        else:
            return midValue
    
    
def icecreamParlor(m, arr):
    # Complete this function
    sortedArray = sorted(arr)
    arrayLength = len(arr)   
    returningValue = recursiveBinarySearch(sortedArray,0,arrayLength,m)
    print(returningValue)

if __name__ == "__main__":
    t = int(input().strip())
    for a0 in range(t):
        m = int(input().strip())
        n = int(input().strip())
        arr = list(map(int, input().strip().split(' ')))
        result = icecreamParlor(m, arr)
        #print (" ".join(map(str, result)))
