// Function to check even or odd

# include <iostream>
using namespace std;

void evenOdd (int a){
  if (a % 2 == 0)
    cout << a << " is even" << endl;
  else
    cout << a << " is Odd" << endl;
}
int main (){
 evenOdd(5);
 evenOdd(10);
}