// Find Prime Numbers in Array
// Print all prime numbers from the array.

#include <iostream>
using namespace std;
bool isPrime(int n)
{
  if (n < 2)
  {
    return false;
  }
  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    
      return false;
    return true;
  }
}

int main(){

  int arr[] = {4, 7, 10, 13, 17, 20};
  int n = 6;

  for (int i = 0; i < n; i++)
  {
    if (isPrime (arr[i]))
    cout << arr[i] <<" ";
  }
  return 0;
}