// 8. Function to Reverse a Number

#include <iostream>
using namespace std;
//Function
int ReverseNum(int num){
  
 int R_num = 0;
 int rem ;
 while (num)
 {
  rem = num % 10 ;
  R_num = R_num * 10 + rem ;
  num = num / 10 ;
 }
 return R_num ;

}

int main (){

  int value;
  cout <<"Enter Number : ";
  cin >> value;
  cout << value << " Reverse Number is : " << ReverseNum (value);

  return 0;
}