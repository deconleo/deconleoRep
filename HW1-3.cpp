// Write a program that asks the user for 2 integers and calculates 
// and displays the sum of the two integers is a nicely worded outputstatement.

#include <iostream>
using namespace std;
int main()
{
	int I1, I2, I3;

	//Intput
	cout << "Can I have the first integer?"; cout << endl;
	cin >> I1; cout << endl;
	cout << "Can I have the second integer?"; cout << endl;
	cin >> I2; cout << endl; 

	//Calculation
	I3 = I1 + I2;

	//Output
	cout << "The sum of these two is... "; cout << I3; cout << "!"; cout << endl;

	return 0;
}