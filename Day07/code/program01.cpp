// Sort an Array (Selection Sort)
// Implement Selection Sort to sort an array of integers in ascending order.

// Example:
// Input: `[64, 25, 12, 22, 11]`
// Output: `[11, 12, 22, 25, 64]`

#include <iostream>
using namespace std;
int SelectionSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int min_Idx = i;
    for (int j = i + 1; j < n; j++)
      if (arr[j] < arr[min_Idx])
        min_Idx = j;
    int temp = arr[min_Idx];
    arr[min_Idx] = arr[i];
    arr[i] = temp;
  }
}
int main()
{
  int arr[] = {64, 25, 12, 22, 11};
  int n = 5;

  SelectionSort(arr, n);

  cout << "Sorted array: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}