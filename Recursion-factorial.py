#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri May  4 11:56:34 2018

@author: hp
"""

#factorial of a function using recurrsion

def Factorial(n):
    #define base case here
    if(n == 0):
        return 1
    else:
         #define other case here
        return n * Factorial(n-1)
   

print(Factorial(5))