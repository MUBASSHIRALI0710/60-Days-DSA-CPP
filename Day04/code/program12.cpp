// 1️⃣2️⃣ Decimal to Binary Conversion
#include <iostream>
using namespace std;
int main()
{
  int num;
  cout << "Enter decimal number: ";
  cin >> num;

  long long binary = 0;
    long long pos = 1; // This represents the units, tens, hundreds place

    while (num > 0) {
        int rem = num % 2;      // Get the bit (0 or 1)
        binary = binary + (rem * pos); // Place it in the correct position
        num = num / 2;          // Move to next bit
        pos = pos * 10;         // Shift position to the left
    }

    cout << "Binary: " << binary;

    return 0;
  }