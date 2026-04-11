// Sort Array of 0s, 1s, 2s (Dutch National Flag)
// Given an array with values `0`, `1`, and `2`, sort them in ascending order without using a full sorting algorithm (O(n) time).

// **Example:**
// Input: `[2, 0, 2, 1, 1, 0]`
// Output: `[0, 0, 1, 1, 2, 2]`

#include <iostream>
using namespace std;
int main()
{
  int nums[] = {2, 0, 2, 1, 1, 0};
  int n = 6;
  {         //using bubble sort sorting
        for(int i=0;i<n-1;i++) {
            for(int j=0;j<n-1-i;j++) {
                if(nums[j] > nums[j+1]) 
                swap(nums[j], nums[j+1]);
            } 
        }
    }
  for (int i = 0; i < n; i++)
  {
    cout << nums[i];
  }
  
}