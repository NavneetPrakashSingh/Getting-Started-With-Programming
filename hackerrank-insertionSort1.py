#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon May  7 09:20:15 2018

@author: hp
"""
#incomplete problem solution
#insertion sort part 1 | hackerrank | https://www.hackerrank.com/challenges/insertionsort1/problem
def insertionSort1(n, arr):
    # Complete this function    
    for outerIndex in reversed(range(1,n)):
        for innerIndex in reversed(range(0,outerIndex)):
            if(arr[outerIndex]<arr[innerIndex]):
                temp = arr[outerIndex]
                arr[outerIndex] = arr[innerIndex]
                print(arr)
                arr[innerIndex] = temp
            else:
                print(arr)
        

if __name__ == "__main__":
    n = int(input().strip())
    arr = list(map(int, input().strip().split(' ')))
    insertionSort1(n, arr)