// 4️⃣ Multiplication Table

#include <iostream>
using namespace std;
int main()
{
  int num;
  cout << "Enter Number : ";
  cin >> num;
  cout << "Multiplication Table of " << num << ":" << endl;

  // using for loop
  // for (int i = 1; i <= 10; i++)
  //   cout << num << " X " << i << " = " << num * i << endl;

  //using while loop
  int i = 1;
  while (i <= 10)
  {
    cout << num << " X " << i << " = " << num * i << endl;
    i++ ;
  }
  
  return 0;
}