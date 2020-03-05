// Mekhi 2/19/2020
#include <iostream>
using namespace std;
int  main()
{
// Variables
char selc;
selc = 'Z';

// Intro
cout << "Welcome to my program!\n"
<< "This program can do many thing. Please select from this menu:\n\n"
<< "Math: calculates the sum, difference, product and quotient of two numbers.\n"
<< "Name: displays your name in 'last, first' format.\n"
<< "Stars: displays 1-20 stars (*).\n"
<< "Quit: enter Q to quit.\n";

// Main Workspace
do
{
//Selection
cout << endl << "M - Math, N - Name, S - Stars, Q - Quit\n";
cin >> selc;

// Procceses
if (selc == 'M', 'N', 'S')
{
// IF MATH
if (selc == 'M')
{
int num1, num2, numSum;
cout << endl << "In this program, I'll calculate the sum, difference, product and quotient of two numbers!\n"
<< "Please select two numbers: ";
cin >> num1
>> num2;
if (num2 == 0)
{
cout << "We can't divide by 0!\n";
}
if (num2 != 0)
{
numSum = num1 + num2;
cout << "Sum - " << numSum << endl;
numSum = num1 - num2;
cout << "Difference - " << numSum << endl;
numSum = num1 * num2;
cout << "Product - " << numSum << endl;
numSum = num1 / num2;
cout << "Quotient - " << numSum << endl;
}

selc = 'Z';
}

// IF NAME
if (selc == 'N')
{
string namFir, namLas;
cout << endl << "In this prgram, I will output your name in 'last, first' format!\n"
<< "Please intput your first then second name:\n";
cin >> namFir
>> namLas;
cout << "Here's your name!\n"
<< namLas << ", " << namFir << endl;

selc = 'Z';
}

// IF STARS
if (selc == 'S')
{
int userNum, finalNum;
finalNum = 0;
cout << endl << "In this program, I will output 1-20 stars!\n"
<< "Please enter an interger between 1-20: ";
cin >> userNum;

if (userNum <= 20)
{
if (userNum >= 1)
{
while (finalNum != userNum)
{
cout << "* ";
finalNum++;
}
cout << "Done!\n";
}
else
cout << "Please enter an integer between 1-20\n";
}
else
cout << "Please enter an integer between 1-20\n";
selc = 'Z';
}
}
else cout << "Please enter an M, N, S, or Q\n";
} while (selc != 'Q');

cout << endl << "Thanks for using my program!\n"
<< "-Mekhi\n";
return 0; // Proper Exit
}