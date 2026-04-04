// 5️⃣ Check Correct PIN

#include <iostream>
using namespace std;
int main()
{
  int pin;
  int count = 0;

  while (pin != 9999 && count < 3)
      {
        cout << "Enter pin : ";
        cin >> pin;

        if (pin != 9999)
        {
          cout << "Incorrect pin Try again"<< endl;
        }

        count++;
      }

      if (pin == 9999)
      {
        cout << "Access granted !";
      }
      else
      {
        cout << "Blocked. Too many incorrect pin";
      }

  return 0;
}