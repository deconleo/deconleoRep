// Write a c++ program that asks the user to enter 2 integers and one character.
// If the character is ‘+’ then add the two numbers together and display the 2 integers
// and the sum to the screen. If the character isn’t ‘+’ say you can’t process it.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
// Variables
int int1, int2, intSum;
char char1;

// Asking the user for two integers and one character
cout << "Please enter two integers:\n";
cin >> int1 >> int2;
cout << "Please enter one character\n";
cin >> char1;
 
// If, Then
if (char1 = "+")
{
intSum = int1 + int2;
cout << "The sum of these two:" << intSum;

}
return 0;
}