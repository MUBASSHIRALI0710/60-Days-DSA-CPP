**********************************************************************************************************************************
**********************************************************************************************************************************
**********************************************************************************************************************************
# 📅 Day 01 — Introduction to C++ for Data Structures & Algorithms
**********************************************************************************************************************************
## 🎯 Goal of Day 01

The goal of Day 01 is to understand the basic structure of a C++ program, fundamental syntax, and essential concepts required before starting Data Structures and Algorithms.

These basics are important because every algorithm and data structure is implemented using programming fundamentals.
**********************************************************************************************************************************
**********************************************************************************************************************************
## 1️⃣ What is C++?

C++ is a high-performance programming language widely used for:

- Data Structures & Algorithms
- Competitive Programming
- Game Development
- System Programming
- High-performance applications

### Why C++ for DSA?

✔ Fast execution speed  
✔ Direct memory management  
✔ Powerful STL (Standard Template Library)  
✔ Widely used in coding interviews
**********************************************************************************************************************************
**********************************************************************************************************************************
## 2️⃣ Structure of a C++ Program

Every C++ program follows a standard structure.

**Example:**

```cpp
#include <iostream>
using namespace std;

int main() {

    cout << "Hello World";

    return 0;
}

Explanation
Component	Description
#include <iostream>	Includes input/output library
using namespace std	Allows using standard functions
main()	Entry point of program
cout	Used for output
return 0	Indicates successful execution
The program always starts execution from main().
**********************************************************************************************************************************
**********************************************************************************************************************************
3️⃣ Input and Output in C++
C++ provides standard input and output using the iostream library.

Output → cout

cout << "Hello";

Example:
#include <iostream>
using namespace std;

int main() {

    cout << "Welcome to DSA Journey";
    return 0;
}

Input → cin
cin >> variable;

Example:
#include <iostream>
using namespace std;

int main() {

    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "You entered: " << number;

    return 0;
}
**********************************************************************************************************************************
**********************************************************************************************************************************
4️⃣ Variables
A variable is a container used to store data.

Example: int age = 21;
Here:

int → data type

age → variable name

21 → stored value

5️⃣ Basic Data Types in C++
Data types define what type of data a variable can store.

DataType     	Size	            Example
int	         4 bytes	      int age = 20;
float	       4 bytes	      float price = 10.5;
double	     8 bytes	      double pi = 3.1415;
char	       1 byte	        char grade = 'A';
bool	       1 byte	        bool isPassed = true;
string	     variable	      string name = "Ali";

Example:
#include <iostream>
using namespace std;

int main() {

    int age = 22;
    float height = 5.8;
    char grade = 'A';

    cout << age << endl;
    cout << height << endl;
    cout << grade << endl;

    return 0;
}
**********************************************************************************************************************************
**********************************************************************************************************************************
6️⃣ Comments in C++
Comments are used to explain code and are ignored by the compiler.

Single Line Comment
// This is a comment

Multi Line Comment
/*
This is a
multi-line comment
*/
note:Comments are very useful when writing complex algorithms.
**********************************************************************************************************************************
**********************************************************************************************************************************
7️⃣ Keywords
Keywords are reserved words in C++ that have special meaning.

Examples:
int
float
if
else
return
while
for
note: These cannot be used as variable names.
**********************************************************************************************************************************
**********************************************************************************************************************************
8️⃣ Identifiers
Identifiers are the names given to variables, functions, or arrays.

Example:
age
totalMarks
calculateSum

Rules
✔ Must start with letter or _
✔ Cannot contain spaces
✔ Cannot be a keyword

Valid:
valid_name
_age
totalMarks

Invalid:
2value
int
user name
**********************************************************************************************************************************
**********************************************************************************************************************************
9️⃣ Header Files
Header files provide predefined functions and features.

Example: #include <iostream>
Common header files
Header	Use
<iostream>	Input/Output
<cmath>	Mathematical functions
<vector>	Dynamic arrays
<algorithm>	Sorting, searching
These are heavily used in DSA problems.
**********************************************************************************************************************************
**********************************************************************************************************************************
🔟 Compilation Process
Before running a C++ program, it goes through these steps:

Source Code → Compilation → Executable Program → Output

Steps: 1. Write code in .cpp file
       2. Compile using compiler (e.g., g++)
       3. Run executable program

Example commands:
g++ program.cpp -o program
./program          # on Linux/Mac
program.exe        # on Windows

🧠 Key Takeaways
✔ C++ is widely used for Data Structures and Algorithms
✔ Every C++ program starts with main()
✔ cin is used for input and cout for output
✔ Variables store data values
✔ Data types define the type of data stored
✔ Comments improve code readability

**********************************************************************************************************************************
**********************************************************************************************************************************
**********************************************************************************************************************************
