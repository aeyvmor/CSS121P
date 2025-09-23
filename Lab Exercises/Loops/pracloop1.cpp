// -------------------------------------------------------------
// Exercise 1: Depreciation Table
// Problem:
//   A car costs $28,000 and depreciates by $4,000 each year.
//   Write a program to display a depreciation table for 7 years.
// -------------------------------------------------------------

#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    // --- Variable Initialization ---
    int cost = 28000;                     // initial cost of the car
    const int depreciation = 4000;        // fixed depreciation per year
    int value = cost;                      // remaining value after depreciation
    int acc_depreciation = 0;              // accumulated depreciation

    // --- Table Header ---
    cout << left << setw(6) << "Year"
         << setw(15) << "Depreciation"
         << setw(20) << "End-of-Year Value"
         << "Accumulated Depreciation" << endl;

    cout << string(65, '-') << "\n"; // print a separator line

    // --- Loop through each year ---
    for (int year = 1; year <= 7; year++) {
        value -= depreciation;            // decrease value by depreciation
        acc_depreciation += depreciation; // increase accumulated depreciation

        // --- Output row ---
        cout << left << setw(6) << year
             << setw(15) << depreciation
             << setw(20) << value
             << acc_depreciation << endl;
    }

    return 0;
}
