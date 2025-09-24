// Sample Looping Program #1
// Print the series 1 2 4 7 11 16 22 29 37 46

#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 5;

    for (int i = 0; i < 4; i++) {
        cout << x << " " << y << " ";
        x--;
        y += 5;
    }   
    cout << x << " " << y;  // Final 6 and 25

    return 0;
}