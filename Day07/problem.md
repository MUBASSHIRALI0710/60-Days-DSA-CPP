# 📅 Day 07 – Sorting Algorithms: Practice Problems

## 🟢 Beginner Level

### 1. Sort an Array (Selection Sort)
Implement Selection Sort to sort an array of integers in ascending order.

**Example:**  
Input: `[64, 25, 12, 22, 11]`  
Output: `[11, 12, 22, 25, 64]`

---

### 2. Sort an Array (Bubble Sort)
Implement Bubble Sort (with early termination optimization) to sort an array.

**Example:**  
Input: `[5, 1, 4, 2, 8]`  
Output: `[1, 2, 4, 5, 8]`

---

### 3. Sort an Array (Insertion Sort)
Implement Insertion Sort to sort an array.

**Example:**  
Input: `[12, 11, 13, 5, 6]`  
Output: `[5, 6, 11, 12, 13]`

---

### 4. Count Swaps in Bubble Sort
Modify Bubble Sort to count the **number of swaps** performed during sorting. Return both the sorted array and the swap count.

**Example:**  
Input: `[4, 3, 2, 1]`  
Output: Sorted `[1,2,3,4]`, Swaps = 6

---

### 5. Sort in Descending Order
Modify **any one** of the three algorithms to sort the array in **descending** order.

**Example:**  
Input: `[3, 1, 4, 1, 5]`  
Output: `[5, 4, 3, 1, 1]`

---

## 🟡 Intermediate Level

### 6. Sort First Half Ascending, Second Half Descending
Given an array of even length, sort the **first half in ascending** and the **second half in descending** order.

**Example:**  
Input: `[8, 3, 5, 1, 4, 2]`  
Output: `[1, 3, 5, 8, 4, 2]`  
(First half sorted asc: `[1,3,5,8]`, second half sorted desc: `[4,2]`)

---

### 7. Sort Binary Array (0s and 1s)
You are given an array containing only `0`s and `1`s. Sort it in linear time (single pass) – do not use counting sort directly. Try using a two‑pointer approach.

**Example:**  
Input: `[0, 1, 0, 1, 1, 0]`  
Output: `[0, 0, 0, 1, 1, 1]`

---

### 8. Sort Array of 0s, 1s, 2s (Dutch National Flag)
Given an array with values `0`, `1`, and `2`, sort them in ascending order without using a full sorting algorithm (O(n) time).

**Example:**  
Input: `[2, 0, 2, 1, 1, 0]`  
Output: `[0, 0, 1, 1, 2, 2]`

---

### 9. Sort Only Odd Numbers
Given an array, sort only the **odd numbers** in ascending order while keeping the even numbers fixed in their original positions.

**Example:**  
Input: `[5, 2, 3, 8, 1, 4]`  
Odd numbers: `[5,3,1]` → sorted `[1,3,5]`  
Output: `[1, 2, 3, 8, 5, 4]`

---

## 🔴 Advanced Level

### 11. Sort an Almost Sorted Array (K‑sorted)
You are given an array where each element is at most `k` positions away from its sorted position. Sort it efficiently in O(n log k) time using a **min‑heap** or insertion sort variation.

**Example:**  
Input: `[3, 2, 1, 4, 5]`, k = 2  
Output: `[1, 2, 3, 4, 5]`

---

### 12. Sort by Frequency
Given an array, sort it in **decreasing order of frequency** of elements. If two elements have the same frequency, the one that appears first should come first.

**Example:**  
Input: `[4, 2, 2, 8, 3, 3, 3, 1]`  
Output: `[3, 3, 3, 2, 2, 4, 8, 1]`  
(3 appears 3 times, 2 appears 2 times, rest once)

---

### 13. Maximum Product of Two Elements After Sorting
Sort the array and find the maximum product of **two different elements** (not necessarily adjacent). Also handle negative numbers.

**Example:**  
Input: `[-10, -10, 5, 2]`  
Output: `100` (product of (-10)*(-10) = 100)

---

### 14. Sort Squares of a Sorted Array (Two Pointers)
Given a sorted array of integers (can be negative), return the array of **squares** of each number, also sorted in non‑decreasing order. Do it in O(n) time.

**Example:**  
Input: `[-4, -1, 0, 3, 10]`  
Output: `[0, 1, 9, 16, 100]`

---

### 15. Sort an Array Using Recursive Insertion Sort
Implement **Insertion Sort recursively** (without using loops – only recursion).

**Example:**  
Input: `[4, 3, 2, 1]`  
Output: `[1, 2, 3, 4]`

---

