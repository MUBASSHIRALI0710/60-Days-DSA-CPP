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
  for(int i=0;i<n-1;i++) {
            for(int j=0;j<n-1-i;j++) {
                if(arr[j] > arr[j+1]) 
                swap(arr[j], arr[j+1]);
            } 
        }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i];
  }
  return 0;
}