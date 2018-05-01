#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue May  1 08:49:42 2018

@author: hp
"""

#hackerrank | love-letter-mystery | https://www.hackerrank.com/challenges/the-love-letter-mystery/problem

def reverseString(s):
    return "".join(reversed(s))

def theLoveLetterMystery(s):
    # Complete this function
    reversedString = reverseString(s)
    difference= 0
    for index in range(int(len(s)/2)):
        straightIndex = ord(s[index])
        reversedIndex = ord(reversedString[index])
        print(straightIndex,reversedIndex)
        difference = difference + (abs(reversedIndex - straightIndex))
    
    return difference
    

q = int(input().strip())
for a0 in range(q):
    s = input().strip()
    result = theLoveLetterMystery(s)
    print(result)