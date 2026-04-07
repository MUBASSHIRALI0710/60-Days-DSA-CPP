# 📚 Step 1: What is an Array?

An **array** is a collection of elements stored in **continuous memory locations** and accessed using an **index**.

**Declaration:**  
`int arr[5];`  
`int arr[] = {1,2,3,4,5};`

## 2️⃣ Memory Layout
arr[0] arr[1] arr[2] arr[3] arr[4]
[1000] [1004] [1008] [1012] [1016] (assuming int = 4 bytes)

Access any element in O(1) time using base address + index * size.

---

## 3️⃣ Basic Operations

### Traversal

for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}


Example:

```id="arr1"
int arr[5] = {10, 20, 30, 40, 50};
```

Memory representation:

```
Index:   0   1   2   3   4
Value:  10  20  30  40  50
```

👉 Index **always starts from 0**.

---

# 💻 Step 2: Basic Array Program

### Print elements of an array

```cpp
#include <iostream>
using namespace std;

int main() {

    int arr[5] = {10,20,30,40,50};

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

}
```

Output

```
10 20 30 40 50
```

---

# 🔹 Step 3: Input and Output Array

```cpp
#include <iostream>
using namespace std;

int main() {

    int arr[5];

    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

}
```

---

# 🔹 Step 4: Important Basic Operations

### 1️⃣ Find Sum of Array

```cpp
int sum=0;

for(int i=0;i<n;i++)
{
    sum+=arr[i];
}
```

---

### 2️⃣ Find Maximum Element

```cpp
int max=arr[0];

for(int i=1;i<n;i++)
{
    if(arr[i]>max)
    max=arr[i];
}
```

---

### 3️⃣ Find Minimum Element

```cpp
int min=arr[0];

for(int i=1;i<n;i++)
{
    if(arr[i]<min)
    min=arr[i];
}
```

---

# 🚀 Step 5: Intermediate Array Problems

### 1️⃣ Reverse an Array

Example

```
Input: 1 2 3 4 5
Output: 5 4 3 2 1
```

```cpp
for(int i=0;i<n/2;i++)
{
    swap(arr[i],arr[n-i-1]);
}
```

---

### 2️⃣ Second Largest Element

Example

```
[10,20,4,45,99]
Output: 45
```

---

### 3️⃣ Check if Array is Sorted

Example

```
1 2 3 4 5 → true
5 4 3 → false
```

---

### 4️⃣ Move Zeros to End

Example

```
Input:
0 1 0 3 12

Output:
1 3 12 0 0
```

---

# 🔥 Step 6: FAANG Level Array Problems

These problems appear on **LeetCode**, **Codeforces**, and **HackerRank**.

---

## 1️⃣ Two Sum Problem

```
nums = [2,7,11,15]
target = 9

Output = [0,1]
```

---

## 2️⃣ Kadane's Algorithm

Find **maximum subarray sum**.

Example

```
[-2,1,-3,4,-1,2,1,-5,4]

Output = 6
```

Subarray:

```
4 -1 2 1
```

---

## 3️⃣ Majority Element

Example

```
[3,2,3]

Output = 3
```

Use **Boyer-Moore Voting Algorithm**.

---

## 4️⃣ Merge Two Sorted Arrays

Example

```
[1,3,5]
[2,4,6]

Output
1 2 3 4 5 6
```

---



# ⭐ 20 Array Problems Roadmap

### Beginner

1. Print array
2. Sum of elements
3. Maximum element
4. Minimum element
5. Reverse array

### Intermediate

6. Second largest
7. Check sorted
8. Move zeros
9. Rotate array
10. Remove duplicates

### Advanced

11. Two sum
12. Kadane algorithm
13. Majority element
14. Stock buy sell
15. Product of array except self

### FAANG Level

16. Longest subarray sum
17. Sliding window maximum
18. Subarray with given sum
19. Merge intervals
20. Trapping rainwater

---
