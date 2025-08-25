#!/usr/bin/env python
#-*- encoding: utf-8 -*-
"""
    Solutiont to leetcode 122
"""

from typing import List

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        profit = 0
        for i in range(len(prices) - 1):
            if prices[i] < prices [i + 1]:
                profit += prices[i + 1] - prices[i]
        return profit

solution = Solution()
print(solution.maxProfit([7,1,5,3,6,4]))
print(solution.maxProfit([1,2,3,4,5]))
