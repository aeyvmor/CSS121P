// -------------------------------------------------------------
// Exercise 2: Celsius to Fahrenheit Conversion Table
// Problem:
//   Write a program that displays a Celsius to Fahrenheit table.
//   Start from 5°C and increase by 5°C until 50°C.
//   Formula: F = (C * 9/5) + 32
// -------------------------------------------------------------

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // --- Table Header ---
    cout << left << setw(12) << "DEGREES"
         << setw(12) << "DEGREES" << endl;
    cout << left << setw(12) << "CELSIUS"
         << setw(12) << "FAHRENHEIT" << endl;
    cout << string(24, '-') << "\n"; // separator line

    // --- Loop from 5°C to 50°C, step = 5 ---
    for (int c = 5; c <= 50; c += 5) { // Increment by the step (5) each iteration
        double f = (c * 9.0 / 5.0) + 32; // convert Celsius to Fahrenheit

        // --- Output row with 2 decimal places ---
        cout << left << setw(12) << c
             << fixed << setprecision(2)
             << setw(12) << f << endl;
    }

    return 0;
}


