// Write a c++ program that asks the user to enter 2 integers and
// one character. If the character is ‘+’ then add the two numbers together
// and display the 2 integers and the sum to the screen. If the character
// isn’t ‘+’ say you can’t process it.
// Mekhi 2.24.20
#include <iostream>
using namespace std;
int main()
{
int int1, int2, intSum;
char charPlus;
intSum = 0;
cout << "Please enter two integers\n";
cin >> int1 >> int2;
cout << "Please enter a '+'\n";
cin >> charPlus;
while (intSum == 0)
{
if (charPlus == '+')
{
intSum = int1 + int2;
cout << int1 << " + " << int2 << " = " << intSum;
}
else
{
cout << "Please enter a '+'\n";
cin >> charPlus;
}
}
return 0;
}