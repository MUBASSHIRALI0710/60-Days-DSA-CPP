// Sort an Array (Bubble Sort)
// Implement Bubble Sort (with early termination optimization) to sort an array.

// **Example:**  
// Input: `[5, 1, 4, 2, 8]`  
// Output: `[1, 2, 4, 5, 8]`

#include <iostream>
using namespace std;
int main(){
  int arr[] = {5, 1, 4, 2, 8};
  int n = 5;
  for (int i = 0; i < n-1; i++)
  {
    for (int j = 0; j < n-i-1; j++)
    {
      if(arr[j]> arr[j+1])
      swap(arr[j],arr[j+1]);
    }
    
  }
  for (int i = 0; i < n; i++)
  cout << arr[i]<<" ";
  
}