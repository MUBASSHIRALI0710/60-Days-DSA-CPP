// 9. Sort Only Odd Numbers
// Given an array, sort only the **odd numbers** in ascending order while keeping the even numbers fixed in their original positions.

// **Example:**
// Input: `[5, 2, 3, 8, 1, 4]`
// Odd numbers: `[5,3,1]` → sorted `[1,3,5]`
// Output: `[1, 2, 3, 8, 5, 4]`

#include <iostream>
using namespace std;
int SortOddNum(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    if (arr[i] % 2 != 0)
    {
      cout << arr[i];
    }
  }
}
int main()
{
  int arr[] = {5, 2, 3, 8, 1, 4};
  int n = 6;
  SortOddNum(arr, n);
}