// Problem 5: Check correct pin
// "Write a C++ program that asks the user to enter a 4-digit PIN. The program should keep asking (loop) for the PIN as long as the user enters an incorrect value. Once the correct PIN (9999) is entered, it should display a success message."

#include <iostream>
using namespace std;
int main()
{
  int pin;
  cout << "Enter four digit correct Pin : ";
  cin >> pin;
  // while loop
  while ( pin != 9999 )
  {
    /* code */
    cout << "Incorrect Pin please try again : ";
    cin >> pin;
  }
  cout << "Successfully Your correct is " << pin;
  return 0;
}
