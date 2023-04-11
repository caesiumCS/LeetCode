# Longest Substring Without Repeating Characters
[Link.](https://leetcode.com/problems/merge-k-sorted-lists/description/)

**Describtion**:

You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.

Merge all the linked-lists into one sorted linked-list and return it.

**Complexity of solution**:

Let *N* be sum of all lengths of *k* lists.

Memory: *O*(*N*)

Time: *O*(*kN*)

**NOTE**: It is possible to use sort operation after merging all values in lists and we will have O(*NlogN*) time complexity. Hence we must compare *k* and *logN*.