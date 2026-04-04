// Function to find largest of two numbers

# include <iostream>
using namespace std;
void largest_Number(int a , int b){
  if ( a > b )
  {
    cout << a <<" is largest Number"<< endl ;
  }
  else
  {
    cout << b <<" is largest Number" << endl ;
  }
  
}
int main (){
largest_Number(7,11);
largest_Number(65,8);
}