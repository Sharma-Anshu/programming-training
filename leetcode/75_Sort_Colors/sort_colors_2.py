#!/usr/bin/env python
# -*- encoding: utf-8 -*-
"""
Alternative solution to leetcode 75.

"""

from typing import List

class Solution:
    def sortColors(self, lst: List[int]) -> None:
        def swap(i: int, j: int ) -> None:
            tmp = lst[i]
            lst[i] = lst[j]
            lst[j] = tmp
        l, h = 0, 0
        r = len(lst) - 1
        while h <= r:
            if lst[h] == 0:
                swap(h, l)
                l += 1
                h += 1
            elif lst[h] == 2:
                swap(h, r)
                r -= 1
            else:
                h += 1
        print(lst)


solution = Solution()
solution.sortColors([0, 2, 2, 1, 1, 0, 1])
solution.sortColors([2,0,2,1,1,0])
solution.sortColors([2, 0, 1])

