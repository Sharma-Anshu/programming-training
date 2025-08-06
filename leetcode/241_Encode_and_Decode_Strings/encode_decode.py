#!/usr/bin/env python
#-*- coding: utf-8 -*-
"""
    This is a solution to leetcode 271
"""

from typing import List

class Solution:

    def encode(self, strs: List[str]) -> str:
        res = ""
        for s in strs:
            res += str(len(s)) + "#" + s
        return res

    def decode(self, s: str) -> List[str]:
        res = []
        i = 0

        while i < len(s):
            j = i
            while s[j] != "#":
                j += 1
            length = int(s[i:j])
            i = j + 1
            j = i + length
            res.append(s[i:j])
            i = j
        return res

solution = Solution()
print(solution.encode(["neet","code","love","you"]))
print(solution.decode(solution.encode(["neet","code","love","you"])))
