// 11. Function to Print Multiplication Table

#include <iostream>
using namespace std;

void Multiplication_Table(int num){
  
  for (int i = 1; i <= 10; i++)
  {
    cout << num << " X " << i << " = " << num*i << endl;
  }
  // while loop
  // int i = 1;
  // while ( i <= 10 )
  // {
  //   cout << num << " X " << i << " = " << num*i << endl;
  //   i++ ;
  // }

}

int main () {
 Multiplication_Table (15);
}