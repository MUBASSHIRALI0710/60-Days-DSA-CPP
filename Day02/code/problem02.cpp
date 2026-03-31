// Problem 2: Factorial of a Number
// Compute N! (N factorial) using a loop. N ≥ 0.  
// 0! = 1.

#include <iostream>
using namespace std;
int main() {
  int factorial = 1 ;
  int number ;

  cout << "Enter Non-Negative Intger Number : " ;
  cin >> number;

  if (number < 0)
  {
    /* code */
    cout << "Factorial is not define for negative Number ";
  }
  else
  {
    /* code */
    for (int i = 1; i <= number; ++i)
    {
      /* code */
      factorial *= i ;
    }
    cout << "Factorial of " << number << " is : " << factorial;
  }
  
}