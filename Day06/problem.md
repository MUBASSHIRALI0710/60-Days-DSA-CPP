# 📅 Day 06 – Arrays Practice Problems

## 🟢 Beginner Level

### 1. Print Array
Given an array of integers, print all its elements separated by space.

**Example:**  
Input: `[1, 2, 3, 4, 5]`  
Output: `1 2 3 4 5`

---

### 2. Sum of Elements
Given an array of integers, return the sum of all elements.

**Example:**  
Input: `[1, 2, 3, 4, 5]`  
Output: `15`

---

### 3. Maximum Element
Find the largest element in the array.

**Example:**  
Input: `[3, 7, 2, 9, 1]`  
Output: `9`

---

### 4. Minimum Element
Find the smallest element in the array.

**Example:**  
Input: `[3, 7, 2, 9, 1]`  
Output: `1`

---

### 5. Reverse Array
Reverse the given array in‑place (without using extra array).

**Example:**  
Input: `[1, 2, 3, 4, 5]`  
Output: `[5, 4, 3, 2, 1]`

---

## 🟡 Intermediate Level

### 6. Second Largest Element
Find the second largest distinct element in the array.  
If it doesn’t exist, return `-1`.

**Example:**  
Input: `[12, 35, 1, 10, 34, 1]`  
Output: `34`

---

### 7. Check if Array is Sorted (Non‑decreasing)
Return `true` if the array is sorted in non‑decreasing order, else `false`.

**Example:**  
Input: `[1, 2, 3, 4, 5]` → `true`  
Input: `[1, 3, 2, 4]` → `false`

---

### 8. Move Zeros to End
Move all zeros to the end of the array while maintaining the relative order of non‑zero elements. Do it in‑place.

**Example:**  
Input: `[0, 1, 0, 3, 12]`  
Output: `[1, 3, 12, 0, 0]`

---

### 9. Rotate Array (Left by K positions)
Rotate the array left by `k` steps. Try to do it in O(n) time and O(1) extra space.

**Example:**  
Input: `[1, 2, 3, 4, 5, 6, 7]`, k = 2  
Output: `[3, 4, 5, 6, 7, 1, 2]`

---

### 10. Remove Duplicates from Sorted Array
Given a sorted array, remove the duplicates **in‑place** such that each element appears only once. Return the new length.

**Example:**  
Input: `[1, 1, 2, 2, 3, 4, 4]`  
Output: length = 4, first 4 elements become `[1, 2, 3, 4]`

---

## 🔴 Advanced Level

### 11. Two Sum
Given an array of integers `nums` and an integer `target`, return indices of two numbers that add up to `target`.  
Assume exactly one solution and you may not use the same element twice.

**Example:**  
Input: `nums = [2, 7, 11, 15]`, target = 9  
Output: `[0, 1]` (because nums[0] + nums[1] = 2 + 7 = 9)

---

### 12. Kadane’s Algorithm – Maximum Subarray Sum
Find the contiguous subarray with the largest sum and return its sum.

**Example:**  
Input: `[-2, 1, -3, 4, -1, 2, 1, -5, 4]`  
Output: `6` (subarray `[4, -1, 2, 1]`)

---

### 13. Majority Element (Moore’s Voting)
Find the element that appears more than `n/2` times. Assume such element always exists.

**Example:**  
Input: `[3, 2, 3]`  
Output: `3`

---

### 14. Best Time to Buy and Sell Stock
Given prices where `prices[i]` is the stock price on day `i`, find the maximum profit you can achieve (buy once, sell once). If no profit possible, return 0.

**Example:**  
Input: `[7, 1, 5, 3, 6, 4]`  
Output: `5` (buy at 1, sell at 6)

---

### 15. Product of Array Except Self
Return an array `answer` such that `answer[i]` is the product of all elements except `nums[i]`, **without using division**.

**Example:**  
Input: `[1, 2, 3, 4]`  
Output: `[24, 12, 8, 6]`

---

## 🚀 FAANG Level

### 16. Longest Subarray with Sum K (positive & negative)
Given an array of integers (can be negative) and a target sum `k`, return the length of the longest subarray that sums to `k`.

**Example:**  
Input: `[1, -1, 5, -2, 3]`, k = 3  
Output: `4` (subarray `[1, -1, 5, -2]` sums to 3)

---

### 17. Sliding Window Maximum
Given an array and a window size `k`, return an array of maximums from each sliding window of size `k`.

**Example:**  
Input: `[1, 3, -1, -3, 5, 3, 6, 7]`, k = 3  
Output: `[3, 3, 5, 5, 6, 7]`

---

### 18. Subarray with Given Sum (non‑negative integers)
Given an array of **non‑negative** integers and a target sum, find if there exists a contiguous subarray that sums exactly to the target. Return its start and end indices (1‑based).

**Example:**  
Input: `[1, 2, 3, 7, 5]`, target = 12  
Output: `[2, 4]` (subarray `[2, 3, 7]`)

---

### 19. Merge Intervals
Given an array of intervals `[start, end]`, merge all overlapping intervals.

**Example:**  
Input: `[[1,3],[2,6],[8,10],[15,18]]`  
Output: `[[1,6],[8,10],[15,18]]`

---

### 20. Trapping Rainwater
Given an array representing the height of bars, compute how much water can be trapped after raining.

**Example:**  
Input: `[0,1,0,2,1,0,1,3,2,1,2,1]`  
Output: `6`