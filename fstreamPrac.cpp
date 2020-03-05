// fstream Saving Data Practice
// Mekhi Woods 3.4.20
#include <iostream>
#include <fstream>
using namespace std;

void newData()
{
ofstream fout; // Output TO File
int singVar;

cout << "Please enter a value:\n";
cin >> singVar;

// Saving to File
fout.open("savedData2.txt");
fout << singVar << endl;
fout.close();

cout << "Your value is " << singVar << endl;
}

void oldData()
{
ifstream fin;  // Output FROM File
int singVar;

cout << "Using Saved Data...\n";

// Extracting from File
fin.open("savedData2.txt");
fin >> singVar;
fin.close();

cout << "Your value is " << singVar << endl;
}

int main()
{
// Varriables
char selc;

// Selection of using savedData.txt
cout << "Used saved data? (Y/N)\n";
cin >> selc;

// Creating New Data and Printing to Screen
if (selc == 'N')
{
newData();
}

// Using Previous Data and Printing to Screen
if (selc == 'Y')
{
oldData();
}

return 0; // Proper Exit
}
