#!/usr/bin/env python
#-*- encoding: utf 8 -*-
"""
    Solution to leetcode 238.
"""

from typing import List

class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        if len(nums) == 0:
            return []
        res = [0] * len(nums)
        pfx = [0] * len(nums)
        sfx = [0] * len(nums)
        pfx[0] = sfx[len(nums) - 1] = 1
        for i in range(1, len(nums)):
            pfx[i] = pfx[i - 1] * nums[i - 1]
        for i in range(len(nums) - 2, -1, -1):
            sfx[i] = sfx[i + 1] * nums[i + 1]
        result = []
        for i in range(len(nums)):
            res[i] = pfx[i] * sfx[i]
        return res

solution = Solution()
print(solution.productExceptSelf([1, 2, 3, 4]))
print(solution.productExceptSelf([-1, 3, 0, -3, 1]))
