// -------------------------------------------------------------
// Exercise 4: Multiplication Table (10x10)
// Problem:
//   Create a program that displays a 10 × 10 multiplication table.
//   Use setw(7) to align the columns neatly.
// -------------------------------------------------------------

#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    cout << "Displaying a 10 x 10 Multiplication Table\n\n";

    // --- Outer loop: represents the "rows" (Y-axis) ---
    // Each iteration of 'i' corresponds to one row in the table.
    for (int i = 1; i <= 10; i++) {       

        // --- Inner loop: represents the "columns" (X-axis) ---
        // Each iteration of 'j' prints one value in the current row.
        for (int j = 1; j <= 10; j++) {   
            cout << setw(7) << i * j;     // print the product of i (row) × j (column)
        }

        // After finishing one row (j = 1 to 10), move to the next line
        cout << endl; 
    }

    return 0;
}
