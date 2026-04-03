// Factorial of N

#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter Number : ";
  cin >> num;
  long long factorial = 1;
  for (int i = 1; i <= num; i++)

    factorial = factorial * i;

  cout << "Factorial of " << num << " : " << factorial << endl;

  return 0;
}