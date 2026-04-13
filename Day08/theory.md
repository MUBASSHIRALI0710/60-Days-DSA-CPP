# 📅 Day 08 – Time & Space Complexity

## 🎯 What is Time Complexity?

**Time Complexity** measures how the running time of an algorithm grows as the input size **n** increases.

- It does **not** measure real time (seconds).
- It measures the **number of operations** an algorithm performs.

### Example

```cpp
for(int i = 0; i < n; i++) {
    cout << i;
}
```

The loop runs **n times** → **Time Complexity = O(n)**

---

## ❓ Why Time Complexity is Important

Time complexity helps us:

- ✅ Compare algorithms
- ✅ Choose faster solutions
- ✅ Predict performance for large inputs
- ✅ Optimize competitive programming solutions

### Example: Sum of first n natural numbers

**Algorithm 1 (Loop) – O(n)**
```cpp
int sum = 0;
for(int i = 1; i <= n; i++) sum += i;
```

**Algorithm 2 (Formula) – O(1)**
```cpp
int sum = n * (n + 1) / 2;
```

👉 Algorithm 2 is much faster for large `n`.

---

## 📊 Types of Time Complexity

| Notation | Name        | Meaning                         |
|----------|-------------|---------------------------------|
| **O( )** | Big O       | Worst case (maximum time)       |
| **Ω( )** | Omega       | Best case (minimum time)        |
| **Θ( )** | Theta       | Average case (typical time)     |

**Example (Linear Search):**
- Worst case (element at end) → **O(n)**
- Best case (element first) → **Ω(1)**
- Average case → **Θ(n)**

---

## 📈 Common Time Complexities (Fast → Slow)

| Complexity | Name          | Typical Algorithm               |
|------------|---------------|----------------------------------|
| **O(1)**   | Constant      | Array access, arithmetic        |
| **O(log n)** | Logarithmic  | Binary search                   |
| **O(n)**   | Linear        | Linear search, array traversal  |
| **O(n log n)** | Linearithmic | Merge sort, quick sort (avg)   |
| **O(n²)**  | Quadratic     | Bubble sort, nested loops       |
| **O(n³)**  | Cubic         | Triple nested loops              |
| **O(2ⁿ)**  | Exponential   | Recursive Fibonacci (naive)     |
| **O(n!)**  | Factorial     | Generating all permutations      |

---

## 🧮 How to Calculate Time Complexity

### Rule 1 – Remove constants
```
O(5n) = O(n)
```

### Rule 2 – Ignore lower terms
```
O(n² + n) = O(n²)
```

### Rule 3 – Nested loops multiply
```cpp
for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
        cout << i << j;
```
→ Complexity: **O(n²)**

### Rule 4 – Logarithmic loops
```cpp
for(int i = 1; i < n; i = i * 2)
    cout << i;
```
Sequence: 1 → 2 → 4 → 8 … → **O(log n)**

---

## 📚 20 Examples for Each Complexity

<details>
<summary><b>🔹 O(1) – Constant Time</b> (Click to expand)</summary>

1. Access array element
2. `swap(a, b)`
3. Stack `top()`
4. Queue `front()`
5. Hash lookup (average)
6. Arithmetic operation
7. `return` statement
8. Compare two numbers
9. Boolean check
10. `push_back` (average)
11. Pointer access
12. Variable assignment
13. Bitwise operation
14. Modulo `%`
15. Vector index access
16. Condition check
17. `min(a, b)`
18. `max(a, b)`
19. Constant loop (e.g., `for(i=0;i<10;i++)`)
20. Map lookup (average)
</details>

<details>
<summary><b>🔹 O(log n) – Logarithmic</b> (Click to expand)</summary>

1. Binary search
2. Heap push/pop
3. Balanced BST search
4. Exponentiation by squaring
5. Loop dividing by 2
6. Tree height traversal
7. Segment tree query
8. Fenwick tree query
9. Binary lifting (LCA)
10. Bit shift loop
11. Finding square root using binary search
12. `lower_bound` / `upper_bound`
13. Search in rotated sorted array
14. Heap delete
15. AVL tree search
16. Red‑black tree search
17. Binary lifting in graphs
18. Logarithmic recursion (e.g., `log n` depth)
19. Tree ancestor queries (binary lifting)
20. Binary search on answer
</details>

<details>
<summary><b>🔹 O(n) – Linear</b> (Click to expand)</summary>

1. Linear search
2. Find maximum element
3. Find minimum element
4. Sum of array
5. Count elements
6. Reverse array (in‑place)
7. Sliding window (fixed size)
8. Two pointer technique (single pass)
9. Check palindrome (string)
10. Count vowels in string
11. Traverse linked list
12. Prefix sum computation
13. Kadane’s algorithm
14. Copy array
15. Rotate array by one
16. Check if array is sorted
17. Frequency count using array
18. Merge two sorted arrays (into third)
19. Count occurrences of an element
20. Print array elements
</details>

<details>
<summary><b>🔹 O(n²) – Quadratic</b> (Click to expand)</summary>

1. Bubble sort
2. Selection sort
3. Insertion sort (worst case)
4. Nested loops (both to n)
5. All pair comparison (find duplicates)
6. Generate all subarrays (naive)
7. Traverse n×n matrix
8. Brute force substring search
9. Pair sum brute force (two loops)
10. Print pattern (n×n stars)
11. Check duplicates without hash
12. Adjacency matrix traversal (dense graph)
13. Simple DP table (n×n)
14. Brute force palindrome check (all substrings)
15. Floyd‑Warshall (n³, but n² per phase)
16. Combination generation (n choose 2)
17. Simple DP nested loops
18. Compare each element with every other
19. Bubble sort type comparisons
20. Two nested loops (i from 0 to n, j from i to n)
</details>

---

## 🏃‍♂️ Competitive Programming Complexity Guide

In **1 second**, a typical CPU can perform about **10⁷ – 10⁸** operations.

| Input Size (n) | Allowed Complexity       |
|----------------|--------------------------|
| n ≤ 10         | O(n!), O(2ⁿ)             |
| n ≤ 20         | O(2ⁿ)                    |
| n ≤ 100        | O(n³), O(n²)             |
| n ≤ 1 000      | O(n²)                    |
| n ≤ 10⁵        | O(n log n)               |
| n ≤ 10⁶        | O(n)                     |
| n > 10⁷        | O(log n), O(1)           |

---

## 🧠 Space Complexity

**Space Complexity** measures how much **memory** an algorithm uses.

Two types:
- **Auxiliary Space** – extra memory (excluding input)
- **Total Space** – input + auxiliary

### Examples

#### O(1) – Constant space
```cpp
int n;
int i;
```
→ Only two variables → **O(1)**

#### O(n) – Linear space
```cpp
int arr[n];
```
→ Array size depends on `n` → **O(n)**

---

## 📦 20 Examples of Space Complexity

<details>
<summary><b>🔹 O(1) – Constant Space</b> (Click to expand)</summary>

1. Swap two variables (using temp)
2. Reverse array in‑place
3. Binary search (iterative)
4. Two pointers (without extra array)
5. Find max/min
6. Single counter variable
7. Sliding window (fixed size, no extra array)
8. Kadane’s algorithm
9. Bitwise operations
10. Check if array is sorted
11. Single pointer traversal
12. Stack `top()` / queue `front()`
13. Condition checks
14. Arithmetic operations
15. Loop variable only
16. Return a single value
17. Boolean flag
18. Constant‑size storage (e.g., 3 variables)
19. Simple calculations
20. `min(a,b)` / `max(a,b)`
</details>

<details>
<summary><b>🔹 O(n) – Linear Space</b> (Click to expand)</summary>

1. Array of size n
2. Vector of size n
3. Prefix sum array
4. Hash map storing n elements
5. Frequency array of size n
6. Recursion stack (e.g., DFS depth n)
7. BFS queue (stores n nodes)
8. DP array of length n
9. Store all subsets (list of n elements)
10. Graph adjacency list (n vertices)
11. Visited array of size n
12. Parent array for tree
13. Copy of a string
14. Store results of n operations
15. Temporary array for merging
16. Merge sort auxiliary array
17. Counting sort (range ~ n)
18. Stack in iterative DFS (worst case)
19. Queue in BFS (worst case)
20. Backtracking recursion (path length n)
</details>

---

## 🔍 Example Walkthrough – Binary Search

**Array:** `[3, 7, 10, 14, 17, 18, 25]`  
**Search for:** `7`

**Steps:**
1. Middle element = `14` → go left
2. Middle of left half = `7` → found

**Complexities:**
- Time: **O(log n)**
- Space: **O(1)** (iterative)

---

## 🧠 Quick Memorization Trick

| If you see               | Likely Complexity |
|--------------------------|-------------------|
| Single loop (0 to n)     | O(n)              |
| Nested loops (both to n) | O(n²)             |
| Loop with divide by 2    | O(log n)          |
| Sorting algorithm        | O(n log n)        |
| Backtracking / recursion (2 branches) | O(2ⁿ)    |

---

## ✅ Final Tip for Competitive Programming

Always check before coding:

- [ ] Input size (`n`)
- [ ] Number of nested loops
- [ ] Recursion depth
- [ ] Memory usage (arrays, recursion stack)
- [ ] Sorting complexity if you use `sort()`

---

