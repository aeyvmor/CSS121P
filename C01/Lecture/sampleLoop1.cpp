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