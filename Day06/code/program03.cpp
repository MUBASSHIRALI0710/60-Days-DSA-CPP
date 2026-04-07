// Maximum Element
// Find the largest element in the array.

#include <iostream>
using namespace std;
int main()
{

  int arr[] = {4, 6, -2, 11, 9};
  int max = arr[0];
  for (int i = 0; i < 5; i++)
  {
    if (max < arr[i])
    {
      max = arr[i];
    }
    }
  cout << max;

  return 0;
}