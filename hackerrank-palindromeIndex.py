#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed May  2 08:35:30 2018

@author: hp
"""

#palindrome index | hackerrank | https://www.hackerrank.com/challenges/palindrome-index/problem

def reverseString(s):
    return "".join(reversed(s))

def checkPalindrome(s):
    #print(s)
    reversedString = reverseString(s)
    if(reversedString == s):
        return "true"
    else:
        return "false"
    
def palindromeIndex(s):
    # Complete this function    
    #print(s[int(len(s)/2)])
    reversedString = reverseString(s)
    cloneString = s
    wrongIndex = []
    for index in range(len(s)):
        if(s[index] != reversedString[index]):
            wrongIndex.append(index)
    
    for values in wrongIndex:
        newString = cloneString[:values]+cloneString[values+1:]
        returningValue = checkPalindrome(newString)
        if(returningValue == "true"):            
            return values        
    
    return -1    

q = int(input().strip())
for a0 in range(q):
    s = input().strip()
    result = palindromeIndex(s)
    print(result)