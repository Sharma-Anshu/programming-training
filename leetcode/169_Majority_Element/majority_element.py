#!/usr/bin/env python
#-*- coding: utf-8 -*-
"""
This is a solution for leetcode problem 169

"""

from typing import List

class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        nums.sort()
        print(nums)
        cnt = 0
        sel = nums[0]
        for n in nums:
            if n == sel:
                cnt += 1
                print(cnt)
                if cnt >= len(nums) / 2:
                    return sel
            else:
                sel = n
                cnt = 1
        return -1

solution = Solution()
print(solution.majorityElement([2, 2, 1, 1, 1, 2, 2]))
