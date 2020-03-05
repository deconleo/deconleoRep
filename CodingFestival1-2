// Mekhi Woods 2.26.20
#include <iostream>
using namespace std;

void doAllTheWork(char sortOp, double sortOne, double sortTwo, double&sortFinal)
{
if (sortOp == '+')
{
sortFinal = sortOne + sortTwo;
return;
}
if (sortOp == '-')
{
sortFinal = sortOne - sortTwo;
return;
}
if (sortOp == '*')
{
sortFinal = sortOne * sortTwo;
return;
}
if (sortOp == '/')
{
sortFinal = sortOne + sortTwo;
return;
}
if (sortOp == '%')
{
sortFinal = sortOne + sortTwo;
return;
}
}

int main()
{
double userOne, userTwo, userFinal;
char userOp;
userFinal = 0;
do
{
cout << "Please enter two real numbers:\n";
cin >> userOne >> userTwo;
cout << "Please select an operator: \n"
<< "+, -, *, /, %\n"
<< "Or enter Q to Quit\n";
cin >> userOp;

doAllTheWork(userOp, userOne, userTwo, userFinal);

if (userFinal != 0)
cout << "Total: " << userFinal << endl;
else
cout << "User Quit / Non-operator / Value = 0\n";
} while (userOp != 'Q');
return 0;
}
