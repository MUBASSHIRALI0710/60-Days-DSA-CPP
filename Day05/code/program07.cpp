// 7. Function to Check Prime Number

#include <iostream>
using namespace std;

bool Isprime(int num)
{
  bool prime = true;

  if (num < 2)
    prime = false;
  else
  {
    for (int i = 2; i < num; i++)
    {
      if (num % 2 == 0)
      {
        prime = false;
      }
      break;
    }
  }

  if (prime)
    cout << num << " is not prime number";
  else
    cout << num << " is prime number";

  return prime;
}

int main()
{

  int num;
  cout << "Enter Number : ";
  cin >> num;

  Isprime(num); // Function call

  return 0;
}