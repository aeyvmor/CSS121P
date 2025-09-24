// -------------------------------------------------------------
// Algorithm 2: Divisibility Counter
// Problem:
//   Write a program that reads 10 integers from the user and
//   counts the number of integers divisible by 2, divisible by 3,
//   divisible by both 2 and 3, and not divisible by 2 or 3.
// -------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    char again;

    // --- Main Program Loop ---
    do {
        // --- Menu Display ---
        cout << "Choose a version to run:" << endl;
        cout << "1 - Use while loop" << endl;
        cout << "2 - Use for loop" << endl;
        cout << "Enter your choice (1 or 2): ";
        int choice;
        cin >> choice;

        // --- Variable Initialization ---
        int by2 = 0, by3 = 0, by23 = 0, notby23 = 0, x; // x is the input number

        if (choice == 1) {
            // --- While Loop Version ---
            int count = 1;
            while (count <= 10) {
                cout << "Enter number: "; cin >> x;
                // --- Counting Logic ---
                if (x % 2 == 0) by2++;
                if (x % 3 == 0) by3++;
                if (x % 2 == 0 && x % 3 == 0) by23++;
                if (x % 2 != 0 && x % 3 != 0) notby23++;
                count++;
            }
        } else if (choice == 2) {
            // --- For Loop Version ---
            for (int count = 1; count <= 10; count++) {
                cout << "Enter number: "; cin >> x;
                // --- Counting Logic ---
                if (x % 2 == 0) by2++;
                if (x % 3 == 0) by3++;
                if (x % 2 == 0 && x % 3 == 0) by23++;
                if (x % 2 != 0 && x % 3 != 0) notby23++;
            }
        } else {
            cout << "Invalid choice. Please try again." << endl;
            continue;
        }

        // --- Output Results ---
        cout << "Divisible by 2: " << by2 << endl;
        cout << "Divisible by 3: " << by3 << endl;
        cout << "Divisible by both 2 and 3: " << by23 << endl;
        cout << "Not divisible by 2 or 3: " << notby23 << endl;

        // --- Ask to try again ---
        cout << "Do you want to try again? (y/n): ";
        cin >> again;
    } while (again == 'y' || again == 'Y');

    return 0;
}