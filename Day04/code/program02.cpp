// Check Alphabet is Vowel or Consonant

#include <iostream>
using namespace std;

int main()
{
  char alphabet;
  cout << "Enter Alphabet : ";
  cin >> alphabet;
  if (alphabet == 'a' || alphabet == 'A' ||
      alphabet == 'e' || alphabet == 'E' ||
      alphabet == 'i' || alphabet == 'I' ||
      alphabet == 'o' || alphabet == 'O' || 
      alphabet == 'u' || alphabet == 'U' )
  {
    cout << alphabet << " is Vowel";
  }
  else
  {
    cout << alphabet << " is Consonant";
  }
  return 0;
}