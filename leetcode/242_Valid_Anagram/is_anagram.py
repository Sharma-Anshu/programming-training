#!/usr/bin/env python
# -*- coding: utf-8 -*-
"""
This is a solution for leetcode problem 242

"""

class Solution:
    def isAnagram(self, s: str, t: str):
        if(len(s) != len(t)):
            return False
        w1_dic = {}
        w2_dic = {}
        for i in range(0, len(s)):
            if s[i] in w1_dic:
                w1_dic[s[i]] += 1
            else:
                w1_dic[s[i]] = 1
            if t[i] in w2_dic:
                w2_dic[t[i]] += 1
            else:
                w2_dic[t[i]] = 1
        return True if w1_dic == w2_dic else False


solution = Solution()
print(solution.isAnagram("anagram", "nagaram"))
print(solution.isAnagram("car", "rat"))
print(solution.isAnagram("racecar", "carrace"))
print(solution.isAnagram("jar", "jam"))
