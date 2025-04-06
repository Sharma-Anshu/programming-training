#!/usr/bin/env python
# -*- coding: utf-8 -*-
"""
Solution to leetcode problem 27.

"""

from typing import List

class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        res = 0
        n = len(nums)
        while res < n:
            if nums[res] == val:
                n -= 1
                nums[res] = nums[n]
            else:
                res += 1
        return res

solution = Solution()
print(solution.removeElement([3, 2, 2, 3], 3))
