// Function to Check Palindrome Number

#include <iostream>
using namespace std;
//Function
void IsPalindrome(int num)
{
  int originalNum = num ;
  int R_num = 0;
  int rem ;
 while (num)
 {
  rem = num % 10 ;
  R_num = R_num * 10 + rem ;
  num = num / 10 ;
 }
 if (originalNum == R_num)
 {
  cout << originalNum << " is Palindrome Number";
 }
 else
 {
  cout << originalNum << " is not Palindrome Number";
 }
 

}

int main (){

  int value;
  cout <<"Enter Number : ";
  cin >> value;
  IsPalindrome (value);

  return 0;
}