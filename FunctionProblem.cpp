// t = age, D = atoms of daughter, P = atoms of parent, lam = decay constant
// Decay Calulations
// 3/2/20 Mekhi
#include <iostream>
#include <cmath>
using namespace std;

// Calculates the age using t = [1/lam]*natLog(1+[D/P])
void calculateAge(int calcDaug, int calcPar, int&checkQuit, double&calcAge, double calcCons)
{
// Calculations
if (calcDaug != 0)
{
if (calcPar != 0)
{
calcAge = (1 / calcCons) * (log(1 + (calcDaug / calcPar)));
}
}
// Checking for exit
if (calcDaug == 0)
{
if (calcPar == 0)
{
checkQuit = 0;
}
}
}

int main()
{
// Variables and main input
double decayCons, isoAge;
int atomDaug, atomPar, quit;
quit = 1;
cout << "Please enter the display constant:\n";
cin >> decayCons;

// Input Loop
do
{
cout << "(Enter 0 for both values to quit)\n"
<< "Please enter the number of daughter atoms:\n";
cin >> atomDaug;
cout << "Please enter the number of parent atoms:\n";
cin >> atomPar;
calculateAge(atomDaug, atomPar, quit, isoAge, decayCons);
cout << "The isotope's age is " << isoAge << "!\n\n";

} while (quit != 0);

return 0; // Proper Exit
}
