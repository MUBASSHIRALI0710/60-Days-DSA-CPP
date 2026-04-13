# 📅 Day 08 – Practice Problems: Time & Space Complexity (Detailed)

## 🟢 Beginner Level

### 1. Identify Complexity – Single Loop

**Code:**
```cpp
for (int i = 0; i < n; i++) {
    cout << i;
}
```

**Questions:**  
- How many times does the loop run?  
- Does the number of operations depend on `n`?  
- What is the time complexity in Big‑O notation?  
- What is the space complexity?

<details>
<summary>📌 Hints</summary>

- Loop runs from 0 to n‑1 → n iterations.  
- Each iteration does O(1) work (printing).  
- No extra array or recursion → constant space.
</details>

<details>
<summary>✅ Answer</summary>

Time = **O(n)**  
Space = **O(1)**
</details>

---

### 2. Identify Complexity – Nested Loops

**Code:**
```cpp
int sum = 0;
for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
        sum += arr[i][j];
```

**Questions:**  
- How many total iterations?  
- Does the inner loop run n times for each outer loop?  
- Write the complexity.  
- If `n = 1000`, roughly how many operations?

<details>
<summary>📌 Hints</summary>

- Outer loop: n times.  
- For each outer, inner runs n times → total n × n = n².  
- Each inner iteration does O(1) work.
</details>

<details>
<summary>✅ Answer</summary>

Time = **O(n²)**  
Space = **O(1)** (excluding input array)
</details>

---

### 3. Identify Complexity – Logarithmic Loop

**Code:**
```cpp
int i = 1;
while (i < n) {
    cout << i;
    i = i * 2;
}
```

**Questions:**  
- What are the values of `i`? (1, 2, 4, 8, …)  
- How many times does the loop run in terms of n?  
- Write the complexity.

<details>
<summary>📌 Hints</summary>

- `i` doubles each time: 1, 2, 4, 8, …, up to < n.  
- Number of steps = ⌈log₂ n⌉.
</details>

<details>
<summary>✅ Answer</summary>

Time = **O(log n)**  
Space = **O(1)**
</details>

---

### 4. Space Complexity – In‑place Reversal

**Code:**
```cpp
void reverseArray(int arr[], int n) {
    int temp;
    for (int i = 0; i < n/2; i++) {
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
}
```

**Questions:**  
- How many extra variables are used (besides the input array)?  
- Does the extra memory depend on `n`?  
- What is the space complexity?

<details>
<summary>✅ Answer</summary>

Only one extra variable `temp` → **O(1)** auxiliary space.  
Total space (including input) = O(n), but we usually report auxiliary space.
</details>

---

### 5. Compare Two Algorithms – Sum of First n Natural Numbers

**Algorithm A:**  
```cpp
int sum = n * (n + 1) / 2;
```

**Algorithm B:**  
```cpp
int sum = 0;
for (int i = 1; i <= n; i++) sum += i;
```

**Questions:**  
- Which algorithm is faster for large n? Why?  
- Give the time complexity of each.  
- Can you always replace a loop with a formula? When not?

<details>
<summary>✅ Answer</summary>

A = **O(1)** (direct formula)  
B = **O(n)** (loop)  
A is much faster. But a formula is not always available (e.g., finding maximum in array).
</details>

---

## 🟡 Intermediate Level

### 6. Analyze This Function – Nested Loop with Decreasing Inner Range

**Code:**
```cpp
void fun(int n) {
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            cout << i << j;
}
```

**Questions:**  
- How many times does the inner loop run for i = 0? i = 1? i = n‑1?  
- Write the total number of iterations as a sum.  
- Simplify the sum to find the complexity.

<details>
<summary>📌 Hints</summary>

- i = 0 → j runs n times  
- i = 1 → j runs n‑1 times  
- …  
- i = n‑1 → j runs 1 time  
- Total = n + (n‑1) + … + 1 = n(n+1)/2
</details>

<details>
<summary>✅ Answer</summary>

Time = **O(n²)**  
(Constants: n²/2 + n/2 → O(n²))  
Space = O(1)
</details>

---

### 7. Recursive Complexity – Factorial

**Code:**
```cpp
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n-1);
}
```

**Questions:**  
- How many recursive calls are made for input n?  
- What is the time complexity?  
- What is the space complexity? Explain why.

<details>
<summary>📌 Hints</summary>

- Each call reduces n by 1 until reaching 1.  
- Total calls = n.  
- Each call uses stack memory (parameters, return address).  
- Maximum stack depth = n.
</details>

<details>
<summary>✅ Answer</summary>

Time = **O(n)** (n calls)  
Space = **O(n)** (recursion stack depth n)
</details>

---

### 8. Mystery Function – Nested Logarithmic Loop

**Code:**
```cpp
void mysterious(int n) {
    int count = 0;
    for (int i = n; i > 0; i /= 2)
        for (int j = 0; j < i; j++)
            count++;
    cout << count;
}
```

**Questions:**  
- What values does `i` take?  
- For each `i`, how many times does the inner loop run?  
- Sum the iterations and find the complexity (hint: geometric series).

<details>
<summary>📌 Hints</summary>

- i = n, n/2, n/4, …, 1  
- Inner runs i times.  
- Total = n + n/2 + n/4 + … + 1 ≈ 2n  
- This is a geometric series with sum < 2n.
</details>

<details>
<summary>✅ Answer</summary>

Time = **O(n)** (because the sum is about 2n)  
Space = O(1)
</details>

---

### 9. Space Complexity of Recursion – Binary Tree Traversal

**Code (preorder traversal):**
```cpp
struct Node { int data; Node *left, *right; };
void preorder(Node* root) {
    if (!root) return;
    cout << root->data;
    preorder(root->left);
    preorder(root->right);
}
```

**Questions:**  
- What is the worst‑case space complexity for a skewed tree?  
- What is the best‑case space complexity for a balanced tree?  
- Why is recursion space not always O(n)?

<details>
<summary>✅ Answer</summary>

- Worst‑case (skewed tree, like a linked list) → recursion depth = n → **O(n)**.  
- Best‑case (perfectly balanced) → depth = log n → **O(log n)**.  
- Space depends on tree shape.
</details>

---

### 10. Best and Worst Case – Linear Search

**Code:**
```cpp
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++)
        if (arr[i] == key) return i;
    return -1;
}
```

**Questions:**  
- When is the best case? What is the Omega (Ω) complexity?  
- When is the worst case? What is the Big‑O complexity?  
- What is the average case (Theta, Θ)? Assume key is equally likely to be anywhere.

<details>
<summary>✅ Answer</summary>

- Best (key at first position) → **Ω(1)**  
- Worst (key at last or not present) → **O(n)**  
- Average (key equally likely) → **Θ(n)** (n/2 comparisons on average)
</details>

---

## 🔴 Advanced Level

### 11. Master Theorem – Merge Sort Recurrence

**Recurrence:** `T(n) = 2T(n/2) + O(n)`

**Questions:**  
- Identify `a`, `b`, and `f(n)` in the recurrence.  
- Apply the Master Theorem.  
- Which sorting algorithm does this represent?  
- What is the space complexity of that algorithm?

<details>
<summary>📌 Master Theorem form</summary>

T(n) = a T(n/b) + f(n)  
Here a = 2, b = 2, f(n) = O(n)
</details>

<details>
<summary>✅ Answer</summary>

- Case 2 of Master Theorem (f(n) = Θ(n^log_b a) = Θ(n)).  
- Solution: T(n) = **O(n log n)**.  
- Algorithm: Merge Sort.  
- Space complexity: **O(n)** (auxiliary array for merging).
</details>

---

### 12. Triple Nested Loop – Subarray Sum

**Code:**
```cpp
long long sum = 0;
for (int i = 0; i < n; i++)
    for (int j = i; j < n; j++)
        for (int k = i; k <= j; k++)
            sum += arr[k];
```

**Questions:**  
- What does this code compute? (Answer: sum of all subarray sums)  
- Compute the total number of iterations exactly (in terms of n).  
- Simplify to find the complexity.

<details>
<summary>📌 Hints</summary>

- This is equivalent to counting how many times each element is added.  
- Each element arr[p] appears in all subarrays that include it.  
- Number of subarrays containing index p = (p+1)*(n-p).  
- Summation leads to O(n³).  
- Directly: three nested loops, each up to n → O(n³).
</details>

<details>
<summary>✅ Answer</summary>

Time = **O(n³)**  
Space = O(1) (extra)
</details>

---

### 13. Optimizing Pair Sum with Hash Map

**Problem:** Given an array of integers, find if there exists a pair (i ≠ j) such that arr[i] + arr[j] = target.

**Naive solution:** O(n²) – check all pairs.

**Questions:**  
- How can you solve it in O(n) time using a hash map?  
- What is the space complexity of the improved solution?  
- Is the trade‑off worth it? When?

<details>
<summary>✅ Answer</summary>

- Use an unordered_set (or map) to store seen numbers.  
- For each element x, check if `target - x` is in the set. If yes, pair found. Else add x.  
- Time = O(n) average.  
- Space = **O(n)** for the set.  
- Trade‑off: faster time but extra memory. Usually worth it for large n.
</details>

---

### 14. Recursive vs Iterative Fibonacci

**Code (recursive):**
```cpp
int fibRec(int n) {
    if (n <= 1) return n;
    return fibRec(n-1) + fibRec(n-2);
}
```

**Code (iterative):**
```cpp
int fibIter(int n) {
    if (n <= 1) return n;
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
```

**Questions:**  
- Draw the recursion tree for fibRec(5). Count how many calls to fibRec(1) are made.  
- Derive the time complexity of fibRec (use recurrence).  
- Compare time and space of both versions.

<details>
<summary>✅ Answer</summary>

- Recursive: T(n) = T(n-1) + T(n-2) → **O(2ⁿ)** time, **O(n)** space (stack).  
- Iterative: **O(n)** time, **O(1)** space.  
- Recursive is extremely slow for n > 40. Always use iterative in practice.
</details>

---

### 15. Memory‑intensive Algorithm – Matrix Creation

**Problem:** An algorithm creates an `n × n` matrix (2D array) of integers.

**Questions:**  
- What is its space complexity?  
- If each integer is 4 bytes, how much memory is needed for n = 10⁵? Is it feasible?  
- What about n = 10⁴?  
- Suggest an alternative if memory is limited.

<details>
<summary>✅ Answer</summary>

- Space = **O(n²)**.  
- For n = 10⁵, n² = 10¹⁰ elements → 10¹⁰ × 4 bytes = 40 GB → not feasible on most machines.  
- For n = 10⁴, 10⁸ elements → 400 MB – possible but large.  
- Alternatives: use sparse representation, process row by row, or avoid creating full matrix if possible.
</details>

---

## 🧪 Challenge – Empirical Measurement

Write a program that measures execution time for different input sizes for:

- O(n) – linear sum  
- O(n²) – bubble sort  
- O(n log n) – `std::sort`  

Run for `n = 100, 500, 1000, 5000, 10000`. Print a table comparing the times.  
**Deliverable:** a screenshot of your output or a markdown table in `code.cpp` comments.

---