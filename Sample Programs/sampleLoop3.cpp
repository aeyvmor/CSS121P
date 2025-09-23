// Sample Looping Program #3
// Take 5 numbers as input and count how many are even and how many are odd

#include <iostream>
using namespace std;

int main() {
    int num[5];
    int evencount = 0;
    int oddcount = 0;

    cout << "Enter 5 numbers" << endl;

    for (int i = 0; i < 5; ++i) { // Loop to take 5 inputs
        cout << "Enter number " << i + 1 << ": "; // Prompt for each number
        cin >> num[i]; // Read the number into the array
        if (num[i] % 2 == 0) { // Check if the number is even
            evencount++; // Increment even count
        }
        else{
            oddcount++; // Increment odd count
        }
    }

    cout << "Even count: " << evencount << endl;
    cout << "Odd count: " << oddcount << endl;

    return 0; 
}