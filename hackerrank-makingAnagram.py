#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu May  3 11:21:02 2018

@author: hp
"""

#making anagarms | hackerrank | https://www.hackerrank.com/challenges/making-anagrams/problem

def occurance(inputString):
    dict= {}
    for values in inputString:
        if values in dict:
            dict[values] += 1
        else:
            dict[values] = 1
    return dict

def intersection(str1,str2):
    return set.intersection(set(str1),set(str2))

def makingAnagrams(s1, s2):
    # Complete this function
    
    set1 = set(s1)
    set2 = set(s2)
    
    intersectionValues = intersection(s1,s2)
    differenceSet1 = set1 - intersectionValues
    differenceSet2 = set2 - intersectionValues
    numberOfCharactersToBeRemoved = len(differenceSet1) + len(differenceSet2)
    
    #take the count of intersection values for both strings
    
    return numberOfCharactersToBeRemoved
    

s1 = input().strip()
s2 = input().strip()
result = makingAnagrams(s1, s2)
print(result)