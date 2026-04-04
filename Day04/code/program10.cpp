// 🔟 Reverse a Number
// 9.Count Number of Digits
#include <iostream>
using namespace std;
int main()
{

  long long num;
  cout << "Enter number: ";
  cin >> num;

  long long sum = 0;
  
  while (num)
  {
    int rem = num % 10 ;
    sum = sum * 10 + rem;
    num = num / 10;
  }
  cout << sum;
  return 0;
}