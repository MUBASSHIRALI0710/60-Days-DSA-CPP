// Missing Number in Array
// Given an array containing `n` distinct numbers taken from `0, 1, 2, ..., n`, find the missing number.


#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0,1,2,6,4,5};
    int n = 6;
    int sum = n*(n+1)/2;
    int arr_sum = 0;

    for(int i=0;i<n;i++)
    {
        arr_sum = arr_sum + arr[i];
    }
    int  missingNumber = sum - arr_sum;
    cout << missingNumber;
}