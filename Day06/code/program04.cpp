// Minimum Element
// Find the smallest element in the array.

#include <iostream>
using namespace std;
int main()
{

  int arr[] = {4, 6, -2, 11, 9};
  int min = arr[0];
  for (int i = 0; i < 5; i++)
  {
    if (min > arr[i])
    {
      min = arr[i];
    }
    }
  cout << min;

  return 0;
}