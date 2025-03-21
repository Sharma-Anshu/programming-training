#!/usr/bin/env python
# -*- coding: utf-8 -*-
"""
This is a solution for leetcode problem 1929.

"""

from typing import List

def getConcatenation(nums: List[int]) -> List[int]:
    
    n = len(nums)
    res = []
    for i in range(0, 2 * n):
        res.append(nums[i % n])
    return res

print(getConcatenation([1,2,1]))

