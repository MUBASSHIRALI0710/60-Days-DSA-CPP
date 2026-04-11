// 4. Count Swaps in Bubble Sort
// Modify Bubble Sort to count the **number of swaps** performed during sorting. Return both the sorted array and the swap count.

// **Example:**  
// Input: `[4, 3, 2, 1]`  
// Output: Sorted `[1,2,3,4]`, Swaps = 6

#include <iostream>
using namespace std;
int main(){
  int arr[] = {4, 3, 2, 1};
  int n = 4;
  int swap_count = 0;
  for (int i = 0; i < n-1; i++)
  {
    for (int j = 0; j < n-i-1; j++)
    {
      if (arr[j]> arr[j+1])
      {
        swap(arr[j] , arr[j+1]);
        swap_count++;
      }
      
    }
    
  }
  cout <<"Sorted Array :" ;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i];
  }
  
  cout << endl <<"Number of swaps : "<<swap_count;
}