// 6. Function to Find Factorial

#include <iostream>
using namespace std;

int factorial (int num){
  int fact = 1;
  for (int i = 1; i <= num; i++){
   fact *= i;
   
  }
   return fact;
  
}
int main() {

  int num;
  cout << "Enter Number : ";
  cin >> num;
  
  cout << factorial(num);
}