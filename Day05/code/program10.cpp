// 10. Function to Calculate Power

#include <iostream>
using namespace std;
//Function
int power(int a , int b)
{
  int result = 1;
  
  for (int i = 1; i <= b; i++)
  {
    result *= a;    // result = result * a;
  }

  return result;
 
}

int main (){

 
 cout << power(2 , 8);

  return 0;
}