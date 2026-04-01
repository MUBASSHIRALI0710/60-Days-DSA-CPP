#include <iostream>
using namespace std;
int main (){

  
  for (int row = 1; row <= 5; row++)
  {
    char x = 'a' + row-1 ;
    for (int col = 1; col <= 5; col++)
    {

      cout << x << " ";
    }
    cout << endl ;
  }
  
  return 0;
}