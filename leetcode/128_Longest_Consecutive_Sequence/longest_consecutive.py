#!/usr/bin/env python
#-*- encoding: utf-8 -*-
"""
    Solution to leetcode 128
"""

from typing import List

class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        numset = set(nums)
        longest = 0

        for n in numset:
            if n - 1 not in numset:
                length = 0
                while n + length in numset:
                    length += 1
                longest = max(length, longest)
        return longest

solution = Solution()
print(solution.longestConsecutive([0,3,7,2,5,8,4,6,0,1]))
print(solution.longestConsecutive([1,0,1,2]))

