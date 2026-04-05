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
<pre>
_________________________________________
|  Part   |    	Meaning                  |
|_________|______________________________|
|  void	  |  function returns nothing    |
| greet() | 	function name            |
|    {}	  |  function body               |
| greet();|  	function call            |
|_________|______________________________|
</pre>
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
<pre>
__________________________________________
|   Part	       |    Meaning          |
|__________________|_____________________|
|  int         	   |  return type        |
|  add	           |  function name      |
|  (int a, int b)  | 	parameters       |
|  return	       |  sends value back   |
|------------------|---------------------|
</pre>

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

## Default Parameters in C++

A default parameter means the function already has a default value.
If the user does not provide a value, the function uses the default value.

### Syntax
return_type function_name(type parameter = default_value)
Example
#include <iostream>
using namespace std;

void greet(string name = "Guest") {
    cout << "Hello " << name << endl;
}

int main() {

    greet("Mubasshir");  
    greet();             

}
Output
Hello Mubasshir
Hello Guest
Explanation
greet("Mubasshir") → uses provided value
greet() → uses default value "Guest"
Important Rule ⚠️

Default parameters must be from right to left.

✔ Correct

void add(int a, int b = 5)

❌ Wrong

void add(int a = 5, int b)


## 2️⃣ Function Overloading

Function overloading means same function name but different parameters.

The compiler decides which function to call based on number or type of arguments.

Example
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {

    cout << add(3,4) << endl;
    cout << add(2.5,3.5);

}
Output
7
6

Here:

add(int,int)
add(double,double)

Same name but different parameter types.

Another Example
void print(int a) {
    cout << a;
}

void print(int a, int b) {
    cout << a << " " << b;
}
## 3️⃣ Call by Reference

Normally functions use Call by Value (copy of variable).

But Call by Reference sends the actual variable, so changes affect the original value.

We use & reference operator.

Example (Call by Value)
#include <iostream>
using namespace std;

void change(int x) {
    x = 50;
}

int main() {

    int a = 10;
    change(a);

    cout << a;

}

Output
10

Because only copy was changed.

Example (Call by Reference)
#include <iostream>
using namespace std;

void change(int &x) {
    x = 50;
}

int main() {

    int a = 10;
    change(a);

    cout << a;

}

Output:
50

Now the original variable changed.

## 🔑 Difference (Important for Interviews)
<pre>
____________________________________________________________________
Feature	Call              |  by Value       |	Call by Reference  |
Value passed              |   Copy          |	Original variable  |
Changes affect original   | 	❌ No      |       ✅ Yes         |
Memory	                  |     More        |        	Less       |
Symbol	                  | normal variable |        	&          |
__________________________|_________________|______________________|

</pre>

🧠 Real Use in DSA

Call by reference is used for:

swapping numbers
modifying arrays
recursion optimization
large data structures

Example: Swap using reference

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}