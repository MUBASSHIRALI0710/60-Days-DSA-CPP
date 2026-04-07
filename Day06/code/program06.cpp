// 6. Input and Output Array
// Write a program to take `n` integers from the user, store them in an array, and then print the array.

#include <iostream>
using namespace std;
void inputOutputArray(){
  int n ;
  cout << "Enter no of element";
  cin >> n;
  int arr[n];

  cout << "Enter " << n << " Element : ";
  for (int i = 0; i < n; i++)
  cin >> arr[i];

  cout << "Array elements : ";
  for (int i = 0; i < n; i++)
  cout << arr[i];
  cout << endl;
  
  
}

int main(){
 inputOutputArray(); 
}