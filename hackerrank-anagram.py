#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu May  3 08:48:16 2018

@author: hp
"""

#anagram | hackerrank | https://www.hackerrank.com/challenges/anagram/problem



def sortMe(s):
    return "".join(sorted(s))

def anagram(s):
    # Complete this function
    if(len(s)%2 != 0):
        return -1
    else:
        halfLengthOfString = int(len(s)/2)
        firstString = s[:halfLengthOfString]
        secondString = s[halfLengthOfString:]
        
        sortedFirstString = sortMe(firstString)
        sortedSecondString = sortMe(secondString)
        
        count = 0
        
        for values in range(halfLengthOfString):
            if(sortedFirstString[values] == sortedSecondString[values]):
                continue
            else:
                count = count + 1
        return count
    
q = int(input().strip())
for a0 in range(q):
    s = input().strip()
    result = anagram(s)
    print(result)