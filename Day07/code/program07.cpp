// Sort Binary Array (0s and 1s)
// You are given an array containing only `0`s and `1`s. Sort it in linear time (single pass) – do not use counting sort directly. Try using a two‑pointer approach.

// **Example:**
// Input: `[0, 1, 0, 1, 1, 0]`
// Output: `[0, 0, 0, 1, 1, 1]`

#include <iostream>
using namespace std;
int main()
{
  int arr[] = {0, 1, 0, 1, 1, 0};
  int n = 6;

  int left = 0, right = n - 1;
  while (left < right)
  {
    if (arr[left] == 0)
      left++;
    else if (arr[right] == 1)
      right--;
    else
      swap(arr[left++], arr[right--]);
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i];
  }
  return 0;
}