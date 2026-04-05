// 13. Function to Find GCD (Very Important)
// Problem:
// Find the Greatest Common Divisor of two numbers.
/// simple bhasa mai HCF nikalna h >>>>>>>>> GCD (Greatest Common Divisor) and HCF (Highest Common Factor) are the same thing

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
  while (b != 0)
  {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

int main()
{

  cout << gcd(12, 12);

  return 0;
}