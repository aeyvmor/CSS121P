// -------------------------------------------------------------
// Algorithm 1: Student Classification
// Problem:
//   Write a program that takes the number of credit units completed
//   and classifies the student as Freshman (<32), Sophomore (32-63),
//   Junior (64-93), or Senior (>93).
// -------------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;

int main() {
    // --- Input Section ---
    int units;
    cout << "Enter the number of credit units completed: ";
    cin >> units;

    // --- Classification Logic ---
    string classification;
    if (units < 32) {
        classification = "Freshman";
    } else if (units <= 63) {
        classification = "Sophomore";
    } else if (units <= 93) {
        classification = "Junior";
    } else {
        classification = "Senior";
    }

    // --- Output Section ---
    cout << "Units: " << units << endl;
    cout << "Classification: " << classification << endl;

    return 0;
}