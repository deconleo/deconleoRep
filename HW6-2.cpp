// Main’s only responsibilityis to call a function called doAllThework.
// doAllTheWork should ask the user for the 2 ints and the char, do the
// calculations and write all info to the screen.
// Mekhi 2.24.20
#include <iostream>
using namespace std;
void doAllTheWork()
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
}

int main()
{
doAllTheWork();
return 0;
}