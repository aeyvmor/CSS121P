// Practical #2 for sequential
#include <iostream> 
#include <iomanip>
using namespace std;

int main() {
	
	// Declarations
	const double gCost = 10000.0;
	int dropouts, remainingdudes;
	double origShare, newShare, addShare;
	
	// Executables 
	cout << "Enter how many guys dropped out (0-9): "; cin >> dropouts;
	
	// Process
	remainingdudes = 10 - dropouts; 
	origShare = gCost / 10;
	newShare = gCost / remainingdudes;
	addShare = newShare - origShare;
	
	// Output 
	cout << "The additional amount that each person will contribute is PHP" << 
			fixed << setprecision(2) << addShare << endl;
	
	return 0; 
	
}
