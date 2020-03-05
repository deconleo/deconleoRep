// Ask the user for a positive integer –calculate and display the squareroot of the number
// (use the math library-cmath–you’ll see examples of the basic functions in Chapter 3).  
// Also find and display the sin and cos of the entered value. Use the knowledge gained from
// problem 1 above to display the sin and cos with 4 digits to the right of the decimal pt.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{  
//Variables
double posInt, posIntSq, posIntSin, posIntCos;

//Setup
cout << fixed << showpoint << setprecision(2);

// Asing the user for a positive integer point numbers.
cout << "Please enter a positive integer.\n";
cin >> posInt; cout << endl;

if (posInt >= 0)
{
//Calculating
posIntSq = sqrt(posInt);
posIntSin = sin(posInt);
posIntCos = cos(posInt);

//Display
cout << "Square Root: " << posIntSq << endl
<< "Sine: " << setw(11) << posIntSin << endl
<< "Cosine: " << setw(9) << posIntCos << endl
<< endl;
}
else
{
//Negative Error
cout << "Hey! You can't do that!\n";
}

return 0;
}