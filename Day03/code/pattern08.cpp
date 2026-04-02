#include <iostream>
using namespace std;
int main () {

  int total_row ;
  cout << "Enter total no of row  : " ;
  cin >> total_row; //no. of row

  int row , col ;

  // upper part
  for (row = 1; row <= total_row; row++)
  {
    //left side
    for (col = 1; col <=  row; col++)
    cout << "*";
    // space
    for (col = 1; col <= (2*total_row) - 2*row; col++)
    cout << " ";
    // right side
    for (col = 1; col <=  row; col++)
    cout << "*";

    cout << endl;
  }
  //lower part
  for ( row = total_row - 1; row >= 1; row--)
  {
    //left side
    for (col = 1; col <=  row; col++)
    cout << "*";
    // space
    for (col = 1; col <= (2*total_row) - 2*row; col++)
    cout << " ";
    // right side
    for (col = 1; col <=  row; col++)
    cout << "*";

    cout << endl;
  }
  
  

  return 0;
}