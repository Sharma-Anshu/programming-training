#!/usr/bin/env python
# -*- coding: utf-8 -*-
"""
"""

from typing import List

class Solution:
    def maximumTripletValue(self, nums: List[int]) -> int:
        res, diff_max, i_max = 0, 0, 0
        for k in nums:
            res = max(res, diff_max * k)
            diff_max = max(diff_max, i_max - k)
            i_max = max(i_max, k)
        return res

testcase_1 = [12, 6, 1, 2, 7]
testcase_2 = [1, 10, 3, 4, 19]
testcase_3 = [1, 2, 3]
solution = Solution()
print(solution.maximumTripletValue(testcase_1))
print(solution.maximumTripletValue(testcase_2))
print(solution.maximumTripletValue(testcase_3))

