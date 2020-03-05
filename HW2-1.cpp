// Asks the user for 3 floating point numbers. 
// Display the numbers in a nice column with 2 
// digits to the right of the decimal point. 
// And below them place a line and below that the total.  
// Place a $ to the left of the total.

#include <iostream>
using namespace std;

int main()
{
	//Variables
	float floNum1, flowNum2, flowNum3, floNumTot;

	// Asing the user for 3 floating point numbers.
	cout << "Please enter 3 floating point numbers." << endl
		 << "1: "; cin >> floNum1; cout << endl
		 << "2: "; cin >> flowNum2; cout << endl
		 << "3: "; cin >> flowNum3; cout << endl << endl;

	//Calculation
	floNumTot = floNum1 + flowNum2 + flowNum3;

	// Display in column


	// Line between numbers and total
	cout << "-----------------------------------" << endl;

	// Total Display
	cout << "Total: $" << floNumTot << endl << endl;

	return 0; 
}