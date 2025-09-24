// Practical #1 for selection/conditional
#include <iostream>
#include <iomanip>
using namespace std; 

int main() {
	double speed, fine; 
	
	cout << "Enter your speed: "; cin >> speed;
	
	if (speed >= 60 && speed <= 75) {
		fine = 2000.00;
	}
	else if (speed < 60) {
		fine = 0;
	}
	else { 
		fine = 2000.00;
	}
	
	cout << "Your speed: " << speed << "mph" << endl; 
	cout << "Fine: PHP" << fine << endl; 
		
	return 0;
}
