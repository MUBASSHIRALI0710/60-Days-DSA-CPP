// 3. LeetCode 852 – Peak Index in a Mountain Array
// **Description:**You are given a mountain array arr where:
// arr.length >= 3
// There exists some i with 0 < i < arr.length - 1 such that:
// arr[0] < arr[1] < ... < arr[i-1] < arr[i]
// arr[i] > arr[i+1] > ... > arr[arr.length - 1]
// Return the peak index i (the index where the array stops increasing and starts decreasing).

#include <iostream> 
using namespace std;

int findPeakIndex(int arr[], int n) {
    int start = 0, end = n - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;

        // If mid is less than the next element, we are on the ascending slope.
        // The peak must be to the right (excluding mid).
        if (arr[mid] < arr[mid + 1]) {
            start = mid + 1;
        } 
        // Otherwise, we are on the descending slope or at the peak.
        // The peak must be at mid or to the left.
        else {
            end = mid;
        }
    }
    // When start == end, we have found the peak index.
    return start;
}

int main() {
    int arr[] = {0,1,3,6,7, 10, 5, 2};
    int n = 8;
    cout << "Peak Index: " << findPeakIndex(arr, n) << endl; 
    return 0;
}
