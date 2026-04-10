# Day 7 – Sorting Algorithms: Selection, Bubble, Insertion Sort

## 📌 Why Sorting?
Sorting arranges data in a specific order (ascending/descending). It's the foundation for efficient searching (binary search), data analysis, and many algorithms.

---

## 1️⃣ Selection Sort

### 🔍 Concept
Find the **minimum element** from the unsorted part and **swap** it with the first element of the unsorted part. Repeat until the whole array is sorted.

### 🧠 Step-by-Step Working (Ascending Order)

**Initial array:** `[64, 25, 12, 22, 11]`
<pre>
------------------------------------------------------------------------------------------------------|
| Pass   | Step                                                              | Array after operation  |
|--------|-------------------------------------------------------------------|------------------------|
| Pass 1 | Find min from index 0..4 → 11 at index 4. Swap arr[0] with arr[4] | `[11, 25, 12, 22, 64]` |
| Pass 2 | Find min from index 1..4 → 12 at index 2. Swap arr[1] with arr[2] | `[11, 12, 25, 22, 64]` |
| Pass 3 | Find min from index 2..4 → 22 at index 3. Swap arr[2] with arr[3] | `[11, 12, 22, 25, 64]` |
| Pass 4 | Find min from index 3..4 → 25 at index 3 (already correct)        | `[11, 12, 22, 25, 64]` |
</pre>
**Sorted!** ✅

### 💻 C++ Code
```cpp
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int minIdx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }
        swap(arr[i], arr[minIdx]);
    }
}
```

### 📊 Complexity
- **Time:** O(n²) always (best, average, worst)
- **Space:** O(1) (in-place)
- **Stable?** No (can change relative order of equal elements)

---

## 2️⃣ Bubble Sort

### 🔍 Concept
Repeatedly **swap adjacent elements** if they are in the wrong order. After each pass, the largest element "bubbles up" to its correct position at the end.

### 🧠 Step-by-Step Working

**Initial array:** `[64, 34, 25, 12, 22, 11, 90]`

#### Pass 1 (i=0 to n-2)
- Compare 64 & 34 → swap → `[34, 64, 25, 12, 22, 11, 90]`
- Compare 64 & 25 → swap → `[34, 25, 64, 12, 22, 11, 90]`
- Compare 64 & 12 → swap → `[34, 25, 12, 64, 22, 11, 90]`
- Compare 64 & 22 → swap → `[34, 25, 12, 22, 64, 11, 90]`
- Compare 64 & 11 → swap → `[34, 25, 12, 22, 11, 64, 90]`
- Compare 64 & 90 → no swap → `[34, 25, 12, 22, 11, 64, 90]`  
  → Largest element `90` is now at the end.

#### Pass 2 (i=0 to n-3) – ignore last element
- Compare 34 & 25 → swap → `[25, 34, 12, 22, 11, 64, 90]`
- Compare 34 & 12 → swap → `[25, 12, 34, 22, 11, 64, 90]`
- Compare 34 & 22 → swap → `[25, 12, 22, 34, 11, 64, 90]`
- Compare 34 & 11 → swap → `[25, 12, 22, 11, 34, 64, 90]`
- Compare 34 & 64 → no swap → `[25, 12, 22, 11, 34, 64, 90]`

#### Pass 3, 4, … continue until no swaps needed.

**Optimization:** If a pass makes no swaps, the array is already sorted → break early.

### 💻 C++ Code (with optimization)
```cpp
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        bool swapped = false;
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if (!swapped) break;  // no swap → already sorted
    }
}
```

### 📊 Complexity
- **Best case** (already sorted): O(n) – because swapped flag breaks early.
- **Average & Worst case:** O(n²)
- **Space:** O(1) (in-place)
- **Stable?** Yes (equal elements retain relative order)

---

## 3️⃣ Insertion Sort

### 🔍 Concept
Build the sorted array **one element at a time** by inserting each new element into its correct position among the already sorted part.

Think of sorting playing cards in your hand – you pick a card and insert it where it belongs.

### 🧠 Step-by-Step Working

**Initial array:** `[12, 11, 13, 5, 6]`

| Step | Operation | Array |
|------|-----------|-------|
| Start | Assume first element `12` is sorted | `[12, 11, 13, 5, 6]` |
| i=1 (key=11) | Compare with 12: 11 < 12 → shift 12 to right → insert 11 | `[11, 12, 13, 5, 6]` |
| i=2 (key=13) | Compare with 12: 13 > 12 → no shift, insert at same position | `[11, 12, 13, 5, 6]` |
| i=3 (key=5) | Compare with 13: 5<13 → shift 13 right; compare with 12: 5<12 → shift; compare with 11: 5<11 → shift; insert at index 0 | `[5, 11, 12, 13, 6]` |
| i=4 (key=6) | Compare with 13: 6<13 → shift; compare with 12: 6<12 → shift; compare with 11: 6<11 → shift; compare with 5: 6>5 → insert after 5 | `[5, 6, 11, 12, 13]` |

**Sorted!** ✅

### 💻 C++ Code
```cpp
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        // Shift elements that are greater than key to the right
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
```

### 📊 Complexity
- **Best case** (already sorted): O(n) – while loop never runs.
- **Average & Worst case:** O(n²)
- **Space:** O(1) (in-place)
- **Stable?** Yes (equal elements keep original order)
- **Adaptive:** Very efficient for small or nearly sorted arrays.

---

## 📊 Quick Comparison Table

| Algorithm | Best Time | Average Time | Worst Time | Space | Stable | In-place |
|-----------|-----------|--------------|------------|-------|--------|----------|
| **Selection** | O(n²) | O(n²) | O(n²) | O(1) | No | Yes |
| **Bubble** | O(n) | O(n²) | O(n²) | O(1) | Yes | Yes |
| **Insertion** | O(n) | O(n²) | O(n²) | O(1) | Yes | Yes |

### When to use which?
- **Selection:** When memory writes are expensive (fewer swaps).
- **Bubble:** Educational, not used in practice except for very small arrays.
- **Insertion:** Great for small arrays or nearly sorted data (used in hybrid sorts like Timsort).

---

## 🧪 Practice Problems for Day 7

1. Sort an array of 10 random integers using all three algorithms.
2. Count the number of swaps in Selection Sort vs Bubble Sort.
3. Implement Insertion Sort to sort in **descending** order.
4. Find the time difference between Bubble and Insertion sort on a nearly sorted array.

