#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon May  7 08:19:40 2018

@author: hp
"""
#Tutorial problem | hackerrank | https://www.hackerrank.com/challenges/tutorial-intro/problem

def introTutorial(V, arr):
    # Complete this function
    for values in range(len(arr)):
        if(arr[values] == V):
            return values
        else:
            pass
    
        

if __name__ == "__main__":
    V = int(input().strip())
    n = int(input().strip())
    arr = list(map(int, input().strip().split(' ')))
    result = introTutorial(V, arr)
    print(result)
