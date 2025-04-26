#!/usr/bin/env python
# -*- coding: utf-8 -*-
"""
Solution to leetcode problem 705

"""

class listNode:

    def __init__(self, k: int):
        self.key = k
        self.next = None

class MyHashSet:

    def __init__(self):
        self.my_set = [listNode(0) for _ in range(10 ** 4)]

    def add(self, key: int) -> None:
        node = self.my_set[key % (10 ** 4)]
        while node.next:
            if node.next.key == key:
                return
            node = node.next
        node.next = listNode(key)
    
    def remove(self, key: int) -> None:
        node = self.my_set[key % (10 ** 4)]
        while node.next:
            if node.next.key == key:
                node.next = node.next.next
                return
            node = node.next

    def contains(self, key:int) -> bool:
        node = self.my_set[key % (10 ** 4)]
        while node.next:
            if node.next.key == key:
                return True
            node = node.next
        return False

myHashSet = MyHashSet()
myHashSet.add(1)      # set = [1]
myHashSet.add(2)      # set = [1, 2]
print("check for 1: ")
print(myHashSet.contains(1)) # return True
print("check for 3: ")
print(myHashSet.contains(3)) # return False, (not found)
myHashSet.add(2)      # set = [1, 2]
print("check for 2: ")
print(myHashSet.contains(2)) # return False, (not found)
myHashSet.remove(2)   # set = [1]
print("check for 2 after remove: ")
print(myHashSet.contains(2)) # return False, (already removed)

