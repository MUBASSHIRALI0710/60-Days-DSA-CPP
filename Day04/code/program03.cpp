// Print Even Numbers from 1 to N

#include <iostream>
using namespace std;
int main()
{

  int num;
  cout << "Enter Number : ";
  cin >> num;
  int count = 0;

  // using for loop
  // for (int i = 2; i <= num; i += 2)
  // {
  //   cout << i << " "  ;
  //   count ++ ;

  // }

  // using while loop
  int i = 1;
  while (i <= num)
  {
    if (i % 2 == 0) // Check if number is divisible by 2
    {
      cout << i << " ";
      count++;
    }
    i++;
  }

  cout << endl;
  cout << count << " : total even no";
}