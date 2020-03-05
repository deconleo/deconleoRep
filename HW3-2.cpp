// Extend the program from 1 or 2 or both to keep looping for input as
// long the user doesn’t enter a‘q’for the character. We’ll use the ‘q’
// as the user’s stop sign to tell you to quitlooping so the program can end.
// Mekhi 2/10/20
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
// Variables
int int1, int2, intSum;
char oper1;

// Asking the user for two integers and one character
cout << "Please enter two integers:\n";
cin >> int1 >> int2;
cout << "Please enter the operator:\n";
cin >> oper1;

while (oper1 != '1')
{
// Operations in Action
if (oper1 == '+')
{
intSum = int1 + int2;
cout << "The sum of these two = " << intSum << endl;
cout << "New operator? ('q' to quit)\n";
cin >> oper1;
}

if (oper1 == '-')
{
intSum = int1 - int2;
cout << "The difference of these two = " << intSum << endl;
cout << "New operator? ('q' to quit)\n";
cin >> oper1;
}

if (oper1 == '*')
{
intSum = int1 * int2;
cout << "The product of these two = " << intSum << endl;
cout << "New operator? ('q' to quit)\n";
cin >> oper1;
}

if (oper1 == '/')
{
intSum = int1 / int2;
cout << "The quotient of these two = " << intSum << endl;
cout << "New operator? ('q' to quit)\n";
cin >> oper1;
}

if (oper1 == '%')
{
intSum = int1 % int2;
cout << "The modulus of these two = " << intSum << endl;
cout << "New operator? ('q' to quit)\n";
cin >> oper1;
}

// If operation has an improper operator.
else
{
if (oper1 == 'q')
{
return 69; // Proper exit.
}

else
{
cout << "Sorry, please enter a proper operator.\n";
return 420; // Improper exit
}
}
}
return 0; //Safeguard
}