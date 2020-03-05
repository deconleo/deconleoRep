// Write a program that asks the user for their dog’s age in human years. 
// Calculate and display the dogs age in both human years and dog years.

#include <iostream>
using namespace std;
int main()
{
	double DAH, DAD;

	cout << "I'm going to calculate your dog's age in dog years!"; cout << endl;
	//Intput
	cout << "Can I have the age in human years?"; cout << endl;
	cin >> DAH; cout << endl;

	//Calculation
	DAD = DAH * 7;

	//Output
	cout << "Your dog's age in dog years is... "; cout << DAD; cout << "!"; cout << endl;
	cout << "But your dog is still "; cout << DAH; cout << " in human years too!"; cout << endl;

	return 0;
}