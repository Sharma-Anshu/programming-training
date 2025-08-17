#!/usr/bin/env python
#-*- endcoding: utf-8 -*-
"""
    Solution to leetcode 344
"""

from typing import List

class Solution:
    def reverseString(self, s: List[str]) -> None:
        i = 0
        j = len(s) - 1
        while i < j:
            tmp = s[i]
            s[i] = s[j]
            s[j] = tmp
            i += 1
            j -= 1

test = ['a', 'b', 'c']
solution = Solution()
solution.reverseString(test)
print(test)
