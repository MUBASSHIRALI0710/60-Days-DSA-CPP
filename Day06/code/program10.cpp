// Print Even Numbers in Array
// Print all even numbers present in the array.

#include <iostream>
using namespace std;
int main()
{
  int arr[] = {2, 5, 8, 11, 14, 17};
  int n = 6;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] % 2 == 0)
    {
      cout << arr[i] << " ";
    }
  }

  return 0;
}