#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <cctype>
using namespace std;

int main() {

    //Declarations 
    int choice; // Variable for menu choice
    double a,b,c; // Coefficients for quadratic equation
    int by2 = 0, by3 = 0, by23 = 0, notby23 = 0, x; // x is the input number
    int factorial; // Variable for factorial calculation
    char again; // Variable to control the main loop

    cout << string(15, '=');
    cout << " MENU ";
    cout << string(15, '=') << "\n";

    cout << "[1] Pythagorean Theorem - Find C\n";
    cout << "[2] Division Counter\n";
    cout << "[3] Factorial Calculator\n";
    cout << "[4] Exit\n";

    cin >> choice;

    while (choice < 1 || choice > 4) {
        cout << "Invalid choice. Please select 1, 2, 3, or 4: ";
        cin >> choice;
    }

    while (choice >=1 && choice <=3) {
        switch (choice) {
            case 1: {
                cout << "Enter side a: "; cin >> a;
                cout << "Enter side b: "; cin >> b;

                double c_calc = sqrt(a * a + b * b);
                cout << "The hypotenuse C is: " << c_calc << endl;
                break;
            }
            case 2: {
                cout << "Enter number: "; cin >> x;
                if (x % 2 == 0 && x % 3 == 0) {
                    cout << "Num is divisible by 2 and 3" << endl;
                } else if (x % 2 == 0) {
                    cout << "Num is divisible by 2" << endl;
                } else if (x % 3 == 0) {
                    cout << "Num is divisible by 3" << endl;
                } else {
                    cout << "Num is not divisible by 2 or 3" << endl;
                }
                break;
            }
            

            case 3: {
            cout << "Enter a positive integer to calculate its factorial: ";
            cin >> factorial;

            while (factorial < 0) {
                cout << "Invalid input. Please enter a non-negative integer: ";
                cin >> factorial;
            }
            unsigned long long result = 1;
            for (int i = factorial; i > 0; i--){
                result *= i;
            }
            for (int i = factorial; i > 0; i--) {
                cout << i;
                if (i > 1)
                    cout << " * ";
            }
            cout << " = " << result << endl;
            break;
        }
            case 4: {
                cout << "Exiting the program." << endl;
                exit(0);
            }
        }
        cout << "Do you want to choose another option? (y/n): ";
        cin >> again;
        while (again != 'y' && again != 'Y' && again != 'n' && again != 'N') {
                cout << "Invalid input. Please enter 'y' or 'n': ";
                cin >> again;
        }

        if (again == 'y' || again == 'Y') {
            cout << string(15, '=');
            cout << " MENU ";
            cout << string(15, '=') << "\n";

            cout << "[1] Pythagorean Theorem - Find C\n";
            cout << "[2] Division Counter\n";
            cout << "[3] Factorial Calculator\n";
            cout << "[4] Exit\n";

            cin >> choice;

            while (choice < 1 || choice > 4) {
                cout << "Invalid choice. Please select 1, 2, 3, or 4: ";
                cin >> choice;
            }
        } else {
            break; // Exit the loop 
        }
    }
    return 0;
}