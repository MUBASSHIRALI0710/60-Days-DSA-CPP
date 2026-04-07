// Reverse Array
// Reverse the given array in-place (without using extra array).

#include <iostream>
using namespace std;
int main()
{
  int arr[] = {4, 6, -2, 11, 9};
  int n = 5;

  for (int i = n - 1; i >= 0; i--)
  {
    cout << arr[i] << " ";
  }
}