// Sort in Descending Order
// Modify **any one** of the three algorithms to sort the array in **descending** order.

// **Example:**
// Input: `[3, 1, 4, 1, 5]`
// Output: `[5, 4, 3, 1, 1]`

#include <iostream>
using namespace std;
int main()
{
  int arr[] = {3, 1, 4, 1, 5};
  int n = 5;

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i; j >= 0; j--)
    {
      if (arr[j] < arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
  cout << "Sort in Descending Order : ";
  for (int i = 0; i < n - 1; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}