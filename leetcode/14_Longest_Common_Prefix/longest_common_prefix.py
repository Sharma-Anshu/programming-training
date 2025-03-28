#!/usr/bin/env python
#-*- coding: utf-8 -*-
"""
This is a solution to leetcode problem 14.

"""

from typing import List
import sys

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if len(strs) == 0:
            return ""
        prefix = ""
        for i in range(len(strs[0])):
            test_ch = strs[0][i]
            for s in strs:
                if i >= len(s) or s[i] != test_ch:
                    return prefix
            prefix += strs[0][i]
        return prefix


solution = Solution()
print(solution.longestCommonPrefix(["flower", "flow", "flight"]))
print(solution.longestCommonPrefix(["dog", "racecar", "car"]))
