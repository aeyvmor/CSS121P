// Sample Looping Program #2
// Print the series 1 2 4 7 11 16 22 29 37 46

#include <iostream>
using namespace std;

int main() {

    // Initialize x to 1
    int x = 1;

    // Loop until x exce    eds 46
    for(int i = 1; x <= 46; i++) { // i is the loop counter starting from 1
        cout << x << " ";  // Print the current value of x
        x = x + i; // Increment x by the loop counter i
    }
    
    return 0; 
}