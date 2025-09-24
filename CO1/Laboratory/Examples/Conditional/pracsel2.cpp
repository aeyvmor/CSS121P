// Practical #2 for selection/conditional
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	// Declarations 
    double salary, bonus, totalSalary;
    int years; 

	// Executables - Input 
    cout << "Enter your salary: ";
    cin >> salary; 
    cout << "Enter the years of service: ";
    cin >> years; 

	// Process using if-else conditions
    if (years <= 5) {
        bonus = salary * 0.5;   
    }
    else if (years >= 6 && years <= 10) {
        bonus = salary;         
    }
    else { // 11 years and above
        if (salary * 2 > 30000)
            bonus = salary * 2; 
        else
            bonus = 30000;     
    }

    totalSalary = salary + bonus;
	
	// Output 
    cout << fixed << setprecision(2);
    cout << "Total salary (with bonus): Php " << totalSalary << endl; 

    return 0;
}

