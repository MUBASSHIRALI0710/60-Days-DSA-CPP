// 8 Prime Number Check

#include <iostream>
using namespace std;

int main() {
    int n, i;
    cout << "Enter number: ";
    cin >> n;

    if (n < 2) {
        cout << "Not Prime";
        return 0;
    }

    i = 2; // Initialize counter
    while (i < n) {
        if (n % i == 0) {
            cout << "Not Prime";
            return 0; // Exit immediately if a divisor is found
        }
        i++; // Increment counter manually
    }

    cout << "Prime";
    return 0;
}
// you can try this using for loop