#include <iostream>
using namespace std;
int BinarySearch(int arr[], int n, int target)
{
  int start = 0, end = n - 1, mid;
  while (start <= end)
  {
    mid = start + (end - start) / 2;
    if (arr[mid] == target)
    {
      return mid;
    }
    else if (arr[mid] > target)  // for acending sorted   //for decending sorted array ke liye ----> arr[mid] < target
    {
      end = mid - 1;
    }
    else
      start = mid + 1;
  }
  return -1;
}
int main()
{
  int arr[1000];
  int n;
  cout << "Enter array size :" << endl;
  cin >> n;
  cout << "Enter Array Elements : ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int target;
  cout << "Which element index you want to find!!" << endl;
  cin >> target;

  cout << BinarySearch(arr, n, target);
  return 0;
}