## 🚀 Step 1: What is a Function in C++?

#### A function is a block of code that performs a specific task and can be reused multiple times.

#### 👉 Instead of writing the same code again and again, we create a function and call it whenever needed.

Example
#include <iostream>
using namespace std;

void greet() {
    cout << "Hello Mubasshir!" << endl;
}

int main() {
    greet();
    return 0;
}
Output
Hello Mubasshir!

Explanation
_________________________________________
|  Part   |    	Meaning                  |
|_________|______________________________|
|  void	  |  function returns nothing    |
| greet() | 	function name              |
|    {}	  |  function body               |
| greet();|  	function call              |
|_________|______________________________|

## 🚀 Step 2: Types of Functions in C++

There are two main types:

### 1️⃣ Built-in Functions
Already provided by C++ libraries.


Example:

sqrt(16)
pow(2,3)

These come from the C++ Standard Library.

### 2️⃣ User-defined Functions

Functions created by the programmer.

Example:

void add() {
    cout << 5 + 3;
}

## 🚀 Step 3: Function Syntax (Important)

General syntax:

return_type function_name(parameters) {
    // code
}

Example:

int add(int a, int b) {
    return a + b;
}
__________________________________________
|   Part	         |    Meaning          |
|__________________|_____________________|
|  int         	   |  return type        |
|  add	           |  function name      |
|  (int a, int b)  | 	parameters         |
|  return	         |  sends value back   |
|------------------|---------------------|


## 🚀 Step 4: Function With Return Value


Example
#include <iostream>
using namespace std;

int square(int n) {
    return n * n;
}

int main() {

    int result = square(5);
    cout << result;

}

Output
25


Explanation

square(5)
5 * 5
return 25


## 🚀 Step 5: Function With Parameters

Parameters allow us to pass values into functions.

Example
#include <iostream>
using namespace std;

void add(int a, int b) {
    cout << a + b;
}

int main() {
    add(4,6);
}

Output
10

## 🚀 Step 6: Function With Return + Parameters

Most common type used in DSA.

#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {

    int result = add(3,7);
    cout << result;

}

Output

10

### 🧠 Interview Tip

Every function has 3 main parts:

1️⃣ Function declaration
2️⃣ Function definition
3️⃣ Function call

Example:

int add(int,int);  // declaration

int add(int a,int b) {   // definition
    return a+b;
}

int main() {
    cout << add(2,3);  // call
}