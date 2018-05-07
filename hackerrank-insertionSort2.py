#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon May  7 09:55:01 2018

@author: hp
"""
#incomplete problem solution
#hackerrank insertionSort 2 | hackerrank | https://www.hackerrank.com/challenges/insertionsort2/problem

def insertionSort2(n, unsortedArray):
    # Complete this function
    elementsInArray = n
    for outerIndex in range(1,elementsInArray):
        for innerIndex in range(0, outerIndex):
            print("outerIndex",outerIndex,"innerIndex",innerIndex)
            if(unsortedArray[innerIndex] > unsortedArray[outerIndex]):
                #swap numbers here
                temp = unsortedArray[outerIndex]
                unsortedArray[outerIndex] = unsortedArray[innerIndex]
                unsortedArray[innerIndex] = temp
                print(unsortedArray)
            else:
                pass

if __name__ == "__main__":
    n = int(input().strip())
    arr = list(map(int, input().strip().split(' ')))
    insertionSort2(n, arr)
