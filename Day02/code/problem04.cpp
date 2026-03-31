// Problem 4: Print Multiplication table of integer Number
// "Write a C++ program that takes an integer input from the user and uses a while loop to generate and display its multiplication table from 1 to 10."


#include <iostream>
using namespace std;
int main(){
  int n ; //table
  int i = 1 ;
  cout <<"Enter number : ";
  cin >> n;
  cout << "Table of "<< n << endl;
  //While loop
  while (i <= 10)
  {
    cout << n << " x "<< i << " = " << i * n << endl ;
    i++;
  }
  return 0;
}