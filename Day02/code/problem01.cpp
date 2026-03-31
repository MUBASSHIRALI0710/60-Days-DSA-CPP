// Problem 1: Even Numbers from 1 to N
// Write a program that takes an integer N and prints all even numbers from 1 to N.


#include <iostream>
using namespace std;
int main()
{
  int i = 2;
  int number;
  int count = 0;

  cout << "Enter integer Number : ";
  cin >> number;

  cout << "The Even Number 1 to " << number << " are : " << endl;
  while ( i <= number)
  {
    /* code */
    cout << i << " ";
    i += 2;

    count++ ;
  }
  cout << endl << "Total Even Number between 1 to " << number << " is : " << count;
  return 0;
}