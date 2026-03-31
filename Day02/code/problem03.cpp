// Problem 3: Vowel or Consonant Checker
// Write a C++ program that prompts the user to enter a single character. Determine whether the entered character is a vowel (a, e, i, o, u) or a consonant. The program should handle both uppercase and lowercase inputs and display the result to the user.

#include <iostream>
using namespace std;
int main()
{
  char Alphabet ;
  cout << "Enter Alphabet: ";
  cin >> Alphabet;
  if (Alphabet == 'a' || Alphabet == 'A' ||
      Alphabet == 'e' || Alphabet == 'E' ||
      Alphabet == 'i' || Alphabet == 'I' ||
      Alphabet == 'o' || Alphabet == 'O' ||
      Alphabet == 'u' || Alphabet == 'U')
  {
    cout << Alphabet << " is vowel ";
  }
  else
  {
    cout << Alphabet << " is concenont: ";
  }
}