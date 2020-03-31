#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
#include <cmath>
#include <string.h>

#include "calculatorFunctions.h"

using namespace std;


//Prototype
void mainMenuFunction();


//Definition
void mainMenuFunction()
{
  char choice;
  char choice2;

  string option = ""; //the option local to int main()
  string color = "\x1b[" + to_string(32) + ";1m";

  do
  {
    cout << color;

    cout << endl << "PHYSICS CALCULATOR MENU" << endl << endl;
    cout << "1. Velocity" << endl;
    cout << "2. Acceleration" << endl;
    cout << "3. Motion" << endl;
    cout << "4. Newton's Second Law" << endl;
    cout << "5. Weight" << endl;
    cout << "6. Momentum" << endl << endl;
    cout << "What would you like to calculate: ";
    cin >> choice;
    cout << endl;

    //choosing option from menu
    if (choice == '1')
      velocity();
    else if (choice == '2')
      accel();
    else if (choice == '3')
      motionMenu();
    else if (choice == '4')
      newtonSecond();
    else if (choice == '5')
      weight();
    else if (choice == '6')
      momentum();
    else
    {
      cout << "Invalid selection" << endl;
      cout << "Answer Y to the following question to try again";
    }
    

    cout << endl << "Would you like to make another calculation? (Y/N): ";
    cin >> choice2;
  }while (choice2 == 'Y' || choice2 == 'y');

  return;
}