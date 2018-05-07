#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon May  7 10:39:41 2018

@author: hp
"""

#binary search using recursion and without recursion
def binaryFunctionUsingRecursion(arrayToBeSearched, minValue, maxValue, valueToBeSearched):
    if(minValue>maxValue):
        return "Value not found"
    else:
        midValue = (maxValue + minValue)/2
        if(arrayToBeSearched[int(midValue)]>valueToBeSearched):
            return binaryFunctionUsingRecursion(arrayToBeSearched,minValue,midValue,valueToBeSearched)
        elif(arrayToBeSearched[int(midValue)]<valueToBeSearched):
            return binaryFunctionUsingRecursion(arrayToBeSearched,midValue + 1,maxValue, valueToBeSearched)
        else:
            return int(midValue)
        
arrayValue = [2,4,6,8,10,12,14,16]
lengthOfArray = int(len(arrayValue))
valueToBeSearched = 12
returningValue = binaryFunctionUsingRecursion(arrayValue,0,lengthOfArray,valueToBeSearched)
print(returningValue)
        
    
