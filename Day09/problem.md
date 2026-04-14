# 📅 Day 09 – Binary Search Practice Problems (LeetCode)

Solve these problems in `Day09/code.cpp`. Use the **binary search template** you learned.

---

## 🟢 Beginner Level

### 1. LeetCode 704 – Binary Search
**Description:** Given a sorted array and a target, return the index if found, else -1.  
**Example:** `nums = [-1,0,3,5,9,12]`, target = 9 → Output: 4

---

### 2. LeetCode 35 – Search Insert Position
**Description:** Given a sorted array and a target, return the index where it would be inserted to maintain order.  
**Example:** `nums = [1,3,5,6]`, target = 5 → Output: 2  
`target = 2` → Output: 1

---

### 3. LeetCode 374 – Guess Number Higher or Lower
**Description:** Guess a number between 1 and n. Use `guess(num)` API that returns -1 (too low), 1 (too high), 0 (correct).  
**Example:** n = 10, pick = 6 → return 6

---

## 🟡 Intermediate Level

### 4. LeetCode 34 – Find First and Last Position of Element in Sorted Array
**Description:** Given a sorted array with duplicates, return `[first, last]` index of target. If not found, return `[-1,-1]`.  
**Example:** `nums = [5,7,7,8,8,10]`, target = 8 → Output: [3,4]

---

### 5. LeetCode 33 – Search in Rotated Sorted Array
**Description:** Given a rotated sorted array (e.g., `[4,5,6,7,0,1,2]`), search for target in O(log n).  
**Example:** `nums = [4,5,6,7,0,1,2]`, target = 0 → Output: 4

---

### 6. LeetCode 81 – Search in Rotated Sorted Array II (with duplicates)
**Description:** Same as above, but duplicates allowed.  
**Example:** `nums = [2,5,6,0,0,1,2]`, target = 0 → Output: true

---

### 7. LeetCode 162 – Find Peak Element
**Description:** A peak element is greater than its neighbors. Return any peak index.  
**Example:** `nums = [1,2,3,1]` → Output: 2 (value 3)

---

### 8. LeetCode 153 – Find Minimum in Rotated Sorted Array
**Description:** Find the minimum element in a rotated sorted array (no duplicates).  
**Example:** `nums = [3,4,5,1,2]` → Output: 1

---

### 9. LeetCode 154 – Find Minimum in Rotated Sorted Array II (with duplicates)
**Description:** Same as above, but duplicates allowed.  
**Example:** `nums = [2,2,2,0,1]` → Output: 0

---

### 10. LeetCode 69 – Sqrt(x)
**Description:** Compute the integer square root of a non-negative integer x (floor).  
**Example:** x = 8 → Output: 2

---

## 🔴 Advanced Level

### 11. LeetCode 875 – Koko Eating Bananas
**Description:** Given piles of bananas and h hours, find the minimum eating speed k such that Koko can eat all bananas within h hours.  
**Example:** `piles = [3,6,7,11]`, h = 8 → Output: 4

---

### 12. LeetCode 410 – Split Array Largest Sum
**Description:** Split array into m subarrays to minimize the largest sum.  
**Example:** `nums = [7,2,5,10,8]`, m = 2 → Output: 18

---

### 13. LeetCode 4 – Median of Two Sorted Arrays
**Description:** Given two sorted arrays, find the median in O(log(m+n)).  
**Example:** `nums1 = [1,3]`, `nums2 = [2]` → Output: 2.0

---

### 14. LeetCode 300 – Longest Increasing Subsequence (Binary Search method)
**Description:** Find length of LIS. Use patience sorting (binary search on tails array).  
**Example:** `nums = [10,9,2,5,3,7,101,18]` → Output: 4

---

### 15. LeetCode 287 – Find the Duplicate Number
**Description:** Given an array of n+1 integers in range [1,n], find the duplicate without modifying the array and using O(1) extra space.  
**Example:** `nums = [1,3,4,2,2]` → Output: 2

---
