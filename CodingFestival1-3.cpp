// Mekhi 2.26.20
#include <iostream>
using namespace std;

void intProcessing(int procOne, int procTwo, int&procMod)
{
procMod = procOne % procTwo;
}

void primDisplay(int dispOne, int dispTwo, int dispMod)
{
cout << dispOne << " % " << dispTwo << " = " << dispMod << endl
<< "AKA... the remainder of " << dispOne << " / " << dispTwo << " = " << dispMod << endl
<< "BYE -primDisplay\n";
}

int main()
{
int userOne, userTwo, userMod;
userMod = 0;
cout << "Please enter two integers:\n";
cin >> userOne >> userTwo;

intProcessing(userOne, userTwo, userMod);
primDisplay(userOne, userTwo, userMod);

cout << "AIDOS -main\n";

return 0;
}
