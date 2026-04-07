// Minimum Element
// Find the smallest element in the array.

#include <iostream>
using namespace std;
int main()
{

  int arr[] = {4, 6, -2, 11, 9};
  int max = 0;
  for (int i = 0; i < 5; i++)
  {
    if (max > arr[i])
    {
      max = arr[i];
    }
    }
  cout << max;

  return 0;
}