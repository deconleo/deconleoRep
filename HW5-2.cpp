// Mekhi 2/19/2020
#include <iostream>
using namespace std;
int  main()
{
// Variables
int manipInt, totInt;
totInt = 0;
manipInt = 0;

// Initial Input
cout << "Please intput numbers between 1-10:\n";
cin >> manipInt;

if (manipInt == 99)
{
cout << "Thanks for using my program -Mekhi\n";
return 20; // Early exit
}

// Main Loop, checks for 99 (exit)
while (manipInt != 99)
{
// Checks for 1-10, then adds to total
if (10 >= manipInt >= 1)
totInt = totInt + manipInt;

// Checks for errors
if (manipInt > 10)
cout << "Please enter an integer between 1-10: ";
if (manipInt < 1)
cout << "Please enter an integer between 1-10: ";

// Reset and Extra Input
manipInt = 0; // resets the variable for later use
cin >> manipInt;
}

// Display Total
cout << endl << "Here's the sum!\n"
<< totInt << endl;

return 0;
}