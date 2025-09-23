// -------------------------------------------------------------
// Exercise 3: Square and Cube Table
// Problem:
//   Create a program that will compute the square and cube
//   of the first ten numbers (1–10) and display them in a table.
// -------------------------------------------------------------

#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    // --- Table Header ---
    cout << left << setw(10) << "NUMBER"
         << setw(10) << "SQUARE"
         << "CUBE" << endl;
    cout << string(30, '-') << "\n";

    // --- Loop through numbers 1 to 10 ---
    for (int n = 1; n <= 10; n++) {
        int square = n * n;       // compute square
        int cube = n * n * n;     // compute cube

        // --- Output row ---
        cout << left << setw(10) << n
             << setw(10) << square
             << cube << endl;
    }

    return 0;
}
