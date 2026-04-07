// Print Array
// Given an array of integers, print all its elements separated by space.

#include <iostream>
using namespace std;
int main(){

  int arr[] ={4, 6, -2, 11, 9};
  int n = 5;
  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << " " ;
  }
  
}

//agar Array ke no. element nhi pata hai toh
//  no of elemrnt = sizeof (arr)/sizeof(arr[0]);