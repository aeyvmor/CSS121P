// Practical #3 for selection/conditional
#include <iostream>
using namespace std;

int main() {
	
	// Declarations 
    char ch;

    // Executables - Input
    cout << "Enter a character: ";
    cin >> ch;

    // Process + Output
    if (ch >= 'A' && ch <= 'Z') {
        cout << "The character just entered is an uppercase letter." << endl;
    } else {
        cout << "The character just entered is not an uppercase letter." << endl;
    }

    return 0;
}

