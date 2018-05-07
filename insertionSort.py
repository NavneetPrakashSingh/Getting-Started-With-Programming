#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon May  7 08:41:23 2018

@author: Navneet Singh
"""

#insertion sort program in python
def insertionSort(unsortedArray):
    elementsInArray = len(unsortedArray)
    for outerIndex in range(1,elementsInArray):
        for innerIndex in range(0, outerIndex):
            if(unsortedArray[innerIndex] > unsortedArray[outerIndex]):
                #swap numbers here
                temp = unsortedArray[outerIndex]
                unsortedArray[outerIndex] = unsortedArray[innerIndex]
                unsortedArray[innerIndex] = temp
            else:
                pass
                
    return unsortedArray

inputArray = list(map(int,input().strip().split(' ')))
returningElements = insertionSort(inputArray)
print(returningElements)

