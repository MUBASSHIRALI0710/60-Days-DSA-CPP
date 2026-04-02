#include <iostream>
using namespace std;
int main () {

  int total_row ;
  cout << "Enter total no of row  : " ;
  cin >> total_row;

  int row , col ;

  for (row = 1; row <= total_row; row++)
  {
    for (col = 1; col <= total_row - row; col++)
    cout << " ";
    
    for (col = 1; col <= row; col++)
    cout << "* ";
    cout << endl;
  }
  

  return 0;
}