// Write a c++ program that extends # 1 above. Ask the user to enter 2 integers and one character.
// If the character is one of the 5 below perform the correct operation and display the numbers and
// the solution otherwise say you can’t process it. ‘+’, ‘-‘, ‘*’, ‘/’, ‘%’ are addition, subtraction,
// multiplication, division, modulus
// Mekhi 2.24.20
#include <iostream>
using namespace std;

// CalcFunc - doAllTheCalcs
void doAllTheCalcs(int int1P, int int2P, char charOpP)
{
int intSumP;
if (charOpP == '+')
{
intSumP = int1P + int2P;
cout << int1P << " + " << int2P << " = " << intSumP;
}
if (charOpP == '-')
{
intSumP = int1P - int2P;
cout << int1P << " - " << int2P << " = " << intSumP;
}
if (charOpP == '*')
{
intSumP = int1P * int2P;
cout << int1P << " * " << int2P << " = " << intSumP;
}
if (charOpP == '/')
{
intSumP = int1P / int2P;
cout << int1P << " / " << int2P << " = " << intSumP;
}
if (charOpP == '%')
{
intSumP = int1P % int2P;
cout << int1P << " % " << int2P << " = " << intSumP;
}
}

//SortingFunction
void sortFunc(int int1F, int int2F, char charOpF)
{
if (charOpF == '+')
doAllTheCalcs(int1F, int2F, charOpF);
if (charOpF == '-')
doAllTheCalcs(int1F, int2F, charOpF);
if (charOpF == '*')
doAllTheCalcs(int1F, int2F, charOpF);
if (charOpF == '/')
doAllTheCalcs(int1F, int2F, charOpF);
if (charOpF == '%')
doAllTheCalcs(int1F, int2F, charOpF);
}

int main()
{
// Main Input
int int1, int2;
char charOp;
cout << "Please enter two integers: \n";
cin >> int1 >> int2;
cout << "Please enter an operator: \n";
cin >> charOp;

sortFunc(int1, int2, charOp);

return 0;
}