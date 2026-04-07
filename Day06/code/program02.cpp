// Sum of Elements
// Given an array of integers, return the sum of all elements.
#include <iostream>
using namespace std;
int main()
{

  int arr[] = {4, 6, -2, 11, 9};
  int sum = 0;
  for (int i = 0; i < 5; i++)
  {
    sum = sum + arr[i];
  }
  cout << sum;

  return 0;
}