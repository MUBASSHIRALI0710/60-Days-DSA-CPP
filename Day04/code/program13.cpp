// 1️⃣3️⃣ Binary to Decimal Conversion
#include <iostream>
using namespace std;
int main()
{
  int num;
  cout << "Enter Binary number: ";
  cin >> num;

  long long decimal = 0;
    long long pos = 1; // This represents the units, tens, hundreds place

    while (num > 0) {
        int rem = num % 10;      // Get the bit (0 or 1 or 2 or 3 or 4 or 5 or 6 or 7 or 8 or 9)
        decimal = decimal + (rem * pos); // Place it in the correct position
        num = num / 10;          // Move to next bit
        pos = pos * 2;         // Shift position to the left
    }

    cout << "Decimal: " << decimal;

    return 0;
  }