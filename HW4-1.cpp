// Mekhi 2/12/20
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
  // Variables
  int inpGrad, gradVal;


  //Input
  cout << "Please enter your test score.\n";
  cin >> inpGrad;

  // Grade Calculation
  if (inpGrad >= 50)
  {
    if (inpGrad <= 60)
    gradVal = 50;
  }

  if (inpGrad >= 60)
  {
    if (inpGrad <= 70)
    gradVal = 60;
  }

  if (inpGrad >= 70)
  {
    if (inpGrad <= 80)
    gradVal = 70;
  }

  if (inpGrad >= 80)
  {
    if (inpGrad <= 90)
    gradVal = 80;
  }

  if (inpGrad >= 90)
  {
    if (inpGrad <= 100)
    gradVal = 90;
  }

  if (inpGrad < 50)
  {
    cout << "I have some bad news...\n";
    gradVal = 40;
  }

  if (inpGrad > 100)
  {
    cout << "Please enter a real grade.\n";
    return 420; // Joker Exit
  }

  if (inpGrad < 0)
  {
    cout << "Please enter a real grade.\n";
    return 420; // Joker Exit
  }

  //Output
  //Switch Statement
  switch (gradVal)
  {
    case (50): cout << "You got an F...\n";
    break;
    case (60): cout << "You got an D...\n";
    break;
    case (70): cout << "You got an C.\n";
    break;
    case (80): cout << "You got an B!\n";
    break;
    case (90): cout << "You got an A!!!\n";
    break;
    case (40): cout << "You got less than an F\n";
    break;
  }
  return 0; // Proper Exit
}