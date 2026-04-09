/*
Minimum Steps to Make Product of Array Equal to 1
You are given an array of integers. In one step, you can increment or decrement any element by 1. Find the minimum number of steps required so that the product of all elements becomes `1`.

Example:
Input: [-2, 0, 3]
Output: `4`
Explanation:
- Change -2 → -1 (1 step)
- Change 0 → -1 (1 step)
- Change 3 → 1 (2 steps)
Total = 4 steps. New array: `[-1, -1, 1]`, product = 1.*/

#include <iostream>
using namespace std;
int main()
{
  int arr[] = {-2, 0, 4};
  int n = 3;

  int step = 0;
  int neg_count = 0;
  int zero_count = 0;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > 0)
    {
      step = step + arr[i] - 1;
    }
    else if (arr[i] < 0)
    {
      step = -1 - arr[i];
      neg_count++;
    }
    else
    {
      zero_count++;
    }
  }
  step = step + zero_count;
  if (neg_count % 2 != 0 && zero_count == 0)
  {
    step += 2;
  }

  cout << step;
  return 0;
}