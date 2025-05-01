#!/usr/bin/env python
#-*- coding: utf-8 -*-
"""
This is a solution to leetcode problem 75.

"""

from typing import List

class Solution:
    def sortColors(self, nums: List[int]) -> None:
        freq_map = {0:0, 1:0, 2:0}
        for n in nums:
            freq_map[n] += 1
        i = 0
        for k in range(3):
            while freq_map[k] > 0:
                nums[i] = k
                freq_map[k] -= 1
                i += 1
        print(nums)

solution = Solution()
test1 = [2, 0, 2, 1, 1, 0]
test2 = [2, 0, 1]
solution.sortColors([2, 0, 2, 1, 1, 0])
solution.sortColors([2, 0, 1])
print(test1)
print(test2)
