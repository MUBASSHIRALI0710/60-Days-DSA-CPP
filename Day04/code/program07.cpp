// 7️⃣ Fibonacci Series

// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     cout << "Enter the limit: ";
//     cin >> num;

//     int t1 = 0, t2 = 1;
//     // Calculate the first next term before the loop
//     int nextTerm = t1 + t2;

//     // Print the first two terms manually
//     cout << "Fibonacci Series: " << t1 << ", " << t2;

//     // Use the while loop to find and print subsequent terms
//     while (nextTerm <= num) {
        
//         // Update terms for the next iteration
//         nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;
//         cout << ", " << nextTerm;
//     }

//     cout << endl;
//     return 0;
// }
/////////////////////////////
/////  using for loop  /////
///////////////////////////
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the limit: ";
    cin >> num;

    int t1 = 0, t2 = 1;
    // Calculate the first next term before the loop
    int nextTerm = 0;

    // Print the first two terms manually
    cout << "Fibonacci Series: " ;

    // Use the for loop to find and print subsequent terms
    for (int i = 1; i <= num; i++)
    {
      if (i == 1)
      {
        cout << t1 << ", " ;
        continue;
      }
      if (i == 2)
      {
        cout << t2  ;
        continue;
      }
      nextTerm = t1 + t2 ;
      t1 = t2 ;
      t2 = nextTerm ;
      
      
      cout << " , "<< nextTerm ;
    }

    cout << endl;
    return 0;
}