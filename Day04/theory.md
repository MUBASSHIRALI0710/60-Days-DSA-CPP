# 📅 Day 04 – Loops in C++ (Revision)

## 🎯 Goal
Reinforce the concept of loops – `for`, `while`, and `do-while` – and practice common loop-based problems.

---

## 1️⃣ `for` Loop

Used when the number of iterations is known in advance.

### Syntax
```cpp
for (initialization; condition; update) {
    // body
}
for (int i = 1; i <= 5; i++) {
    cout << i << " ";
}
// Output: 1 2 3 4 5

Common Patterns
Accumulator (sum, factorial):
factorial = factorial * i;

Even numbers: if (i % 2 == 0)

Multiplication table: cout << n << " x " << i << " = " << n*i;

## 2️⃣ while Loop
Used when the number of iterations depends on a condition that may change inside the loop.

### Syntax
while (condition) {
    // body
}

Example: Keep asking until correct PIN
int pin, correctPin = 1234;
cout << "Enter PIN: ";
cin >> pin;
while (pin != correctPin) {
    cout << "Wrong! Try again: ";
    cin >> pin;
}
cout << "Access Granted";

Common Patterns
Digit extraction: digit = n % 10; n = n / 10;

Fibonacci: next = a + b; a = b; b = next;

Prime check: Check divisibility from 2 to √n

## 3️⃣ do-while Loop
Executes the body at least once, then checks the condition.

### Syntax
do {
    // body
} while (condition);

Example: Menu that appears at least once
int choice;
do {
    cout << "1. Start 2. Exit: ";
    cin >> choice;
} while (choice != 2);

## 4️⃣ Loop Control Statements
break – exits the loop immediately.

continue – skips the rest of the current iteration.
for (int i = 1; i <= 10; i++) {
    if (i == 5) break;        // stops at 5
    if (i % 2 == 0) continue; // skips even numbers
    cout << i << " ";         // prints odd numbers until 5
}
## 5️⃣ Nested Loops
Loops inside loops – used for patterns, 2D arrays.
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= i; j++) {
        cout << "* ";
    }
    cout << endl;
}
// Output:
// *
// * *
// * * *