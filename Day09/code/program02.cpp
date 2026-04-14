// 2. LeetCode 35 - Search Insert Position
// **Description:** Given a sorted array and a target, return the index where it would be inserted to maintain order.
// **Example:** `nums = [1,3,5,6]`, target = 5 → Output: 2
// `target = 2` → Output: 1

#include <iostream>
using namespace std;
int main()
{
  int nums[4] = {1, 3, 5, 6};
  int target = 2;
  int n = 4;

  int start = 0, end = n - 1;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (nums[mid] == target)
    {
      cout <<"Target at index : "<< mid;
      return mid;
    }
    else if (nums[mid] < target)
    {
      start = mid + 1;
    }
    else
      end = mid - 1;
  }
  cout << start;
  return start;
};
