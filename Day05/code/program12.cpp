// 12. Function to Sum of Digits

#include <iostream>
using namespace std;

void SumDigit(int num){
  int sum = 0;
  int rem ;
  
  while (num>0)

  {
    rem = num % 10 ;
    sum += rem;
    num /= 10 ;
    
  }
  cout << "Sum of digit is : "<< sum;
  
}

int main () {

 SumDigit(155);

 return 0;
}