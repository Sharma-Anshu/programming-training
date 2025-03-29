#!/usr/bin/env python
# -*- coding: utf-8 -*-
"""
This is a solution to Leetcode problem 1

"""

from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        compliments = {}
        for i, n in enumerate(nums):
            if target - n in compliments:
                return [i, compliments[target - n]]
            else:
                compliments[n] = i


solution = Solution()
print(solution.twoSum([2, 11, 15, 7, 6], 9 ))
