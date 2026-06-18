// 9. Demonstrates the difference between the assignment operator (=)
//    and the equality operator (==) in C++.
//
// Explanation:
// - The assignment operator "=" stores a value into a variable.
//   Example: x = 5;  -> this SETS x to 5.
// - The equality operator "==" compares two values and returns
//   true or false, without changing either value.
//   Example: x == 5  -> this CHECKS whether x is equal to 5.
//
// A common beginner mistake is writing "if (x = 5)" instead of
// "if (x == 5)". The first assigns 5 to x (and is always true,
// since 5 is non-zero), while the second actually performs a comparison.

#include <iostream>
using namespace std;

int main() {
    int x;

    // Example of the assignment operator
    x = 5; // x now holds the value 5
    cout << "After assignment x = 5, x is: " << x << endl;

    // Example of the equality operator
    bool isEqualToFive = (x == 5); // compares x to 5, does not change x
    cout << "Checking if x == 5: " << (isEqualToFive ? "true" : "false") << endl;

    // Showing the common mistake vs the correct usage
    int y = 10;

    cout << "\nCommon mistake demonstration:" << endl;
    if (y = 0) { // This ASSIGNS 0 to y (not a comparison!)
        cout << "This won't print, because y is now 0 (false)" << endl;
    } else {
        cout << "y was assigned 0 inside the if-condition (mistake!). y is now: " << y << endl;
    }

    y = 10; // reset y
    if (y == 0) { // This correctly COMPARES y to 0
        cout << "y equals 0" << endl;
    } else {
        cout << "y does not equal 0 (correct comparison). y is still: " << y << endl;
    }

    return 0;
}
