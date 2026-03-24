#include <iostream>
using namespace std;
int main() {
  int Num1, Num2;

  cout <<"Enter First number: ";
  cin >> Num1 ;
  cout <<"Enter Second number: ";
  cin >> Num2 ;

  if (Num1> Num2)
  {
    cout<< Num1 << " is Largest ";
  }
  
  else if ( Num1 == Num2)
  {
    cout<< Num1 << " and " << Num2 << " are equal ";
  }
  else
  {
    cout<< Num2<< " is Largest ";
  }
  return 0;
}