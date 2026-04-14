// 1. LeetCode 704 - Binary Search

#include <iostream>
using namespace std;
int main()
{
  int arr[] = {-1, 0, 3, 5, 9, 12};
  int target = 3;

  int n = 6;
  int mid, start = 0, end = n - 1;
  while (start <= end)
  {
    mid = start + (end - start) / 2;

    if (arr[mid] == target)
    {
      cout <<"Found at index : " << mid;
      return 0;
    }
    else if (arr[mid] < target)
      start = mid + 1;
    else
      end = mid - 1;
  }
  cout << "not found";

  return 0;
}