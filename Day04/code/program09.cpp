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
    num = num / 10;
    sum++;
  }
  cout << sum;
  return 0;
}