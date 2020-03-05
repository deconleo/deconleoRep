// Mekhi 2.26.20
#include <iostream>
using namespace std;

int main()
{
int userVar, manipVar;
manipVar = 0;
userVar = 0;
do
{
cout << "Please enter a positve integer:\n"
<< "(enter '-1' to Quit)\n";
cin >> userVar;
if (userVar > 0)
{
cout << userVar;
while (manipVar != userVar)
{
cout << "+";
manipVar++;
}
cout << endl;
}

if (userVar <= 0)
{
if (userVar != -1)
cout << "Please enter a positve integer!\n";
}
} while (userVar != -1);
return 0;
}
