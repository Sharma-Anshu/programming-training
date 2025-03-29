#!/usr/bin/env python
# -*- coding: utf-8 -*-
"""
"""

from typing import List

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        freq_lst = []
        grp_lst = []
        for s in strs:
            s_dic = {}
            for c in s:
                if c in s_dic:
                    s_dic[c] += 1
                else:
                    s_dic[c] = 1
            new_freq = True
            for i in range(len(freq_lst)):
                if freq_lst[i] == s_dic:
                    grp_lst[i].append(s)
                    new_freq = False
                    break;
            if(new_freq):
                freq_lst.append(s_dic)
                grp_lst.append([s])
        return grp_lst

solution = Solution()
print("Testcase 1:")
print(solution.groupAnagrams(["act","pots","tops","cat","stop","hat"]))
print("Testcase 2:")
print(solution.groupAnagrams(["x"]))
print("Testcase 3:")
print(solution.groupAnagrams([""]))

