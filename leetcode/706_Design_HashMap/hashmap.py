#!/usr/bin/env python
# -*- coding: utf-8 -*-
"""
Solution to leetcode problem 706

"""

from typing import List

class ListNode:

    def __init__(self, data: List[int]):
        self.data = data
        self.next = None

class MyHashMap:

    def __init__(self):
        self.my_map = [ListNode([0, 0]) for _ in range(10**4)]

    def put(self, key: int, value: int) -> None:
        node = self.my_map[key % (10**4)]
        while node.next:
            if node.next.data[0] == key:
                node.next.data[1] = value
                return
            node = node.next
        node.next = ListNode([key, value])

    def get(self, key: int) -> int:
        node = self.my_map[key % (10**4)]
        while node.next:
            if node.next.data[0] == key:
                return node.next.data[1]
            node = node.next
        return -1

    def remove(self, key: int) -> None:
        node = self.my_map[key % (10**4)]
        while node.next:
            if node.next.data[0] == key:
                node.next = node.next.next
                return
            node = node.next


myHashMap = MyHashMap();
myHashMap.put(1, 1) # The map is now [[1,1]]
myHashMap.put(2, 2) # The map is now [[1,1], [2,2]]
print("get value for key 1:")
print(myHashMap.get(1))    # return 1, The map is now [[1,1], [2,2]]
print("get value for key 3:")
print(myHashMap.get(3))    # return -1 (i.e., not found), The map is now [[1,1], [2,2]]
myHashMap.put(2, 1) # The map is now [[1,1], [2,1]] (i.e., update the existing value)
print("get value for key 2:")
print(myHashMap.get(2))    # return 1, The map is now [[1,1], [2,1]]
myHashMap.remove(2) # remove the mapping for 2, The map is now [[1,1]]
print("get value for key 2:")
print(myHashMap.get(2))    # return -1 (i.e., not found), The map is now [[1,1]]
