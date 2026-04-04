// 1️⃣1️⃣ Check Palindrome Number

#include <iostream>
using namespace std;
int main()
{

  long long num;
  cout << "Enter number: ";
  cin >> num;

  long long originalNum = num;

  long long sum = 0;

  while (num)
  {
    int rem = num % 10;
    sum = sum * 10 + rem;
    num = num / 10;
  }
  if (originalNum == sum)
  {
    cout << "Palindrome Number";
  }
  else
  {
    cout << " Not a Palindrome Number";
  }

  return 0;
}