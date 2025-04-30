#!/usr/bin/env python
# -*- coding: utf-8 -*-
"""
This is a solution for leetcode problem 912

"""

from typing import List


class Solution:
    def merge(self, a: List[int], b: List[int]):
        c = []
        while len(a) > 0 and len(b) > 0:
            if a[-1] > b[-1]:
                c.append(a.pop())
            else:
                c.append(b.pop())
        while len(a) > 0:
            c.append(a.pop())
        while len(b) > 0:
            c.append(b.pop())
        c.reverse()
        return c


    def sortArray(self, nums: List[int]) -> List[int]:
        if len(nums) == 1:
            return nums
        p = len(nums) // 2
        a = self.sortArray(nums[:p])
        b = self.sortArray(nums[p:])
        return self.merge(a, b)


solution = Solution()
print(solution.sortArray([5, 4, 3, 2, 1]))
print(solution.sortArray([5, 1, 1, 2, 0, 0]))
