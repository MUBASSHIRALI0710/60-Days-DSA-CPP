# 📘 Binary Search – Complete Notes (C++)

## 1️⃣ What is Binary Search?

**Binary Search** is a searching algorithm used on a **sorted array**.  
It works by **repeatedly dividing the search space into half**.

**Example array:**  
`3 7 10 14 17 18 25`  
**Find 7**

**Steps:**  
- Step 1 → middle = 14, 7 < 14 → search LEFT  
- Step 2 → middle = 7 → Found

So instead of checking **every element**, we cut the array **in half each step**.

---

## 2️⃣ Conditions for Binary Search

Binary Search **ONLY works when**:  
✅ Array is **sorted** → `1 3 5 7 9`  
❌ Not sorted → `7 1 5 9 2`

---

## 3️⃣ Binary Search Algorithm

### Steps
1. Set two pointers: `start = 0`, `end = n-1`
2. Find middle: `mid = (start + end) / 2`
3. Compare:

| Condition          | Action       |
| ------------------ | ------------ |
| arr[mid] == target | return index |
| target > arr[mid]  | search right |
| target < arr[mid]  | search left  |

---

## 4️⃣ Binary Search Code (C++)

```cpp
#include<iostream>
using namespace std;

int main()
{
    int arr[8] = {5,6,8,9,11,15,17,21};
    int start = 0;
    int end = 7;
    int target = 15;
    int mid;

    while(start <= end)
    {
        mid = (start + end)/2;

        if(arr[mid] == target)
        {
            cout<<"Found at index "<<mid;
            return 0;
        }
        else if(arr[mid] > target)
            end = mid - 1;
        else
            start = mid + 1;
    }
    cout<<"Not found";
}
```

---

## 5️⃣ Dry Run Example

Array: `5 6 8 9 11 15 17 21`  
Find **15**

### Step 1
- start = 0, end = 7, mid = 3, arr[mid] = 9  
- 15 > 9 → go right → start = mid + 1 = 4

### Step 2
- start = 4, end = 7, mid = 5, arr[mid] = 15 → **Found at index 5**

---

## 6️⃣ Time Complexity

Binary search reduces problem size like:  
n → n/2 → n/4 → n/8 → …

**Time Complexity = O(log₂ n)**

| n         | Steps |
| --------- | ----- |
| 100       | 7     |
| 1000      | 10    |
| 1,000,000 | 20    |

Very fast.

---

## 7️⃣ Space Complexity

**O(1)** – only use variables: `start`, `end`, `mid`. No extra memory.

---

## 8️⃣ Important Binary Search Problems

| Problem                     | Example |
|-----------------------------|---------|
| Search Insert Position      | `[1,3,5,6]`, target=2 → output=1 |
| Peak Element                | `[2,3,6,7,5,1,0]` → peak=7 (index=3) |
| Leftmost & Rightmost Index  | `[1,2,2,2,4,5,8]`, target=2 → left=1, right=3 |
| Search in Rotated Array     | `[5,6,8,9,1,2]`, target=1 → index=4 |
| Find Rotation Count         | `[4,5,6,7,2,3]` → rotated 4 times |

---

## 9️⃣ Binary Search Pattern Recognition (Interview Trick)

If problem says:  
- sorted array → yes  
- minimum / maximum possible → yes  
- first / last occurrence → yes  
- peak element → yes  
- rotated sorted array → yes  
- search insert position → yes  

→ **Use Binary Search**

---

## 🔟 Common Mistake Beginners Make

**Wrong mid formula:** `mid = (start + end) / 2` (risk of overflow)  
**Better formula (avoid overflow):** `mid = start + (end - start) / 2`

---

## 🧠 Ultimate Binary Search Template (Memorize)

```cpp
while(start <= end)
{
    int mid = start + (end - start) / 2;

    if(arr[mid] == target)
        return mid;
    else if(arr[mid] < target)
        start = mid + 1;
    else
        end = mid - 1;
}
return -1;
```

---

**Day 09 – Binary Search Complete!** 🚀
