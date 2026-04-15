// 4. LeetCode 34 – Find First and Last Position of Element in Sorted Array
// **Description:** Given a sorted array with duplicates, return `[first, last]` index of target. If not found, return `[-1,-1]`.  
// **Example:** `nums = [5,7,7,8,8,10]`, target = 8 → Output: [3,4]


#include <iostream>
using namespace std;

int findLeft(int arr[], int n, int x) {
    int start = 0, end = n-1, ans = -1;
    while (start <= end) {
        int mid = start + (end - start)/2;
        if (arr[mid] == x) {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < x) start = mid + 1;
        else end = mid - 1;
    }
    return ans;  
}

int findRight(int arr[], int n, int x) {
    int start = 0, end = n-1, ans = -1;
    while (start <= end) {
        int mid = start + (end - start)/2;
        if (arr[mid] == x) {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < x) start = mid + 1;
        else end = mid - 1;
    }
    return ans;
}

int main() {
    int arr[] = {1,2,2,2,4,5,8,11};
    int n = 8, x = 2;
    int left = findLeft(arr, n, x);
    int right = findRight(arr, n, x);
    cout << "left_index: " << left << " right_index: " << right << endl;
    return 0;
}