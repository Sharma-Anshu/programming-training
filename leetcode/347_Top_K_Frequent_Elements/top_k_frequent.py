#!/usr/bin/env python
# -*- coding: utf-8 -*-
"""
Leetcode problem 347.

"""

from typing import List

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        nums = sorted(nums)
        sel = nums[0]
        cnt = 0
        freq = []
        for n in nums:
            if n == sel:
                cnt += 1
            else:
                freq.append((sel, cnt))
                sel = n
                cnt = 1
        freq.append((sel, cnt))
        freq = sorted(freq, key = lambda a: a[1], reverse = True)
        res = []
        for i in range(k):
            res.append(freq[i][0])
        return res


solution = Solution()
print(solution.topKFrequent([1,1,1,2,2,3], 2))
print(solution.topKFrequent([1], 1))


