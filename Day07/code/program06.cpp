// Sort First Half Ascending, Second Half Descending
// Given an array of even length, sort the **first half in ascending** and the **second half in descending** order.

// **Example:**  
// Input: `[8, 3, 5, 1, 4, 2]`  
// Output: `[1, 3, 5, 8, 4, 2]`  
// (First half sorted asc: `[1,3,5,8]`, second half sorted desc: `[4,2]`)

#include <iostream>
using namespace std;

int main(){
  int arr[]={8, 3, 5, 1, 4, 2};
  int n = 6;
  int mid = 4;

  for (int i = 0; i < mid; i++)
  {
    for (int j = i; j > 0; j--)
    {
      if (arr[j] < arr[j-1])
      {
        swap(arr[j] , arr[j-1]);
      }
  
    }
    
  }
  /////////
  for (int i = mid; i < n; i++)
  {
    for (int j = i; j > mid; j--)
    {
      if (arr[j] > arr[j-1])
      {
        swap(arr[j] , arr[j-1]);
      }
  
    }
    
  }
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i] << " ";
  }
  
}