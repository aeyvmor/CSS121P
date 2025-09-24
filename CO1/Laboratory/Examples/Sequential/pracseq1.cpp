// Practical #1 for sequential
#include <iostream> 
#include <iomanip>
using namespace std;

int main() {
	
	// Declarations 
  	int input, ones, tens, hundreds, thousands, 
	  	tenthousands, reversed;
  	
  	// Executables
  	cout << "Enter a 5-digit number:  "; cin >> input;
	
	// Process
  	ones = input % 10;
  	tens = (input / 10) % 10;
  	hundreds = (input / 100) % 10;
  	thousands = (input / 1000) % 10;
  	tenthousands = (input / 10000) % 10;
	
	// Output 
  	cout << "Ten Thousand's Digit is " << tenthousands << endl;
  	cout << "Thousand's Digit is " << thousands << endl;
  	cout << "Hundred's Digit is " << hundreds << endl;
  	cout << "Ten's Digit is " << tens << endl;
  	cout << "One's Digit is " << ones << endl;

  	// Formula for reverse numbver:
  
  	reversed = (ones * 10000) + (tens * 1000) + (hundreds * 100) + (thousands * 10) + tenthousands;
  
  	cout << "The reverse order is " << reversed << endl;
  
  	return 0;
  
}
