// Prompt the user for a positive integer
// –your program should display all values
// from 0 up to and including the entered value.
// Mekhi 2/18/20
#include <iostream>
using namespace std;
int main()
{
// Varriables
int mainInt, finalInt;
cout << "Please enter an interger: ";
cin >> mainInt;
cout << endl;

// Intializing finalInt Variable for use
finalInt = 1;
cout << finalInt << " ";

// Main Loop: checks if finalInt equals mainInt, if not adds 1
do
{
finalInt++;
cout << finalInt << " ";
} while (finalInt != mainInt);

// Exit
cout << endl;
return 0; //Proper Exit
}