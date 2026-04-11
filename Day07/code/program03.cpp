// Sort an Array (Insertion Sort)
// Implement Insertion Sort to sort an array.

// **Example:**  
// Input: `[12, 11, 13, 5, 6]`  
// Output: `[5, 6, 11, 12, 13]`

#include <iostream>
using namespace std;
int main(){
  int arr[] = {12, 11, 13, 5, 6};
  int n = 5;
  for (int i = 0; i < n-1; i++)
  {
    for (int j = i; j >= 0; j--)
    {
      if(arr[j]> arr[j+1])
      swap(arr[j],arr[j+1]);
    }
    
  }
  for (int i = 0; i < n; i++)
  cout << arr[i]<<" ";
  
}