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

## 6. Input and Output Array
Write a program to take `n` integers from the user, store them in an array, and then print the array.

**Example:**  
Input:  
Enter number of elements: 5
Enter 5 elements: 10 20 30 40 50


---

## 7. Missing Number in Array
Given an array containing `n` distinct numbers taken from `0, 1, 2, ..., n`, find the missing number.

**Example:**  
Input: `[3, 0, 1]`  
Output: `2`  
Explanation: The array has numbers 0,1,3 – missing 2.

---

## 8. Remove Duplicates in Array (Sorted)
Given a **sorted** array, remove the duplicates in‑place and return the new length. Do not use extra array.

**Example:**  
Input: `[1, 1, 2, 2, 2, 3, 4, 4]`  
Output: new length = 4, first 4 elements become `[1, 2, 3, 4]`

---

## 9. Print Odd Numbers in Array
Print all odd numbers present in the array.

**Example:**  
Input: `[2, 5, 8, 11, 14, 17]`  
Output: `5 11 17`

---

## 10. Print Even Numbers in Array
Print all even numbers present in the array.

**Example:**  
Input: `[2, 5, 8, 11, 14, 17]`  
Output: `2 8 14`

---

## 11. Find Prime Numbers in Array
Print all prime numbers from the array.

**Example:**  
Input: `[4, 7, 10, 13, 17, 20]`  
Output: `7 13 17`

---

## 12. Array Rotate by One (Left Rotation)
Rotate the array **left by one position**. Do this in‑place.

**Example:**  
Input: `[1, 2, 3, 4, 5]`  
Output: `[2, 3, 4, 5, 1]`

---

## 13. Minimum Steps to Make Product of Array Equal to 1
You are given an array of integers. In one step, you can increment or decrement any element by 1. Find the **minimum number of steps** required so that the product of all elements becomes `1`.

**Example:**  
Input: `[-2, 0, 3]`  
Output: `4`  
Explanation:  
- Change -2 → -1 (1 step)  
- Change 0 → -1 (1 step)  
- Change 3 → 1 (2 steps)  
Total = 4 steps. New array: `[-1, -1, 1]`, product = 1.

---

## 🧠 Hints

| Problem | Hint |
|---------|------|
| 1 | Use two loops – one for input, one for output. |
| 2 | Use sum formula `n*(n+1)/2`. |
| 3 | Two pointers: `j` keeps position for unique elements. |
| 4 & 5 | Check `arr[i] % 2`. |
| 6 | Write a helper `isPrime()` function. |
| 7 | Store first element in temp, shift left, place temp at end. |
| 8 | Count negatives, zeros, positives. Cost to make each element ±1, then adjust sign of negatives. |

---

**Good luck!** 🚀