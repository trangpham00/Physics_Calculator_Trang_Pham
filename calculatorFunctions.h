#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
#include <cmath>
#include <string.h>

#include "motionCalculator.h"

using namespace std;

//Prototypes
void velocity();
void accel();
void motionMenu();
void newtonSecond();
void weight();
void momentum();

//Variables
double ds = 0.0, dt = 0.0, dv = 0.0;
double v = 0.0;
double a = 0.0;
double t = 0.0;
double m = 0.0;
double n = 0.0;
double w = 0.0;
double g = 9.8;
double p = 0.0;
string dsUnit, dtUnit, dvUnit, massUnit, aUnit;

void velocity()
{
  cout << "VELOCITY CALCULATOR" << endl << endl;
  cout << "Enter distance traveled (must be a number/decimal): ";
  while (!(cin >> ds))
  {
    cout << "Must be a number/decimal: ";
    cin.clear();
    cin.ignore(100,'\n');
  }
  cout << "Enter unit for distance (m, km, etc.): ";
  cin.ignore();
  getline(cin, dsUnit);
  cout << "Enter time of travel (must be a number/decimal): ";
  while (!(cin >> dt))
  {
    cout << "Must be a number/decimal: ";
    cin.clear();
    cin.ignore(100,'\n');
  }
  cout << "Enter unit for time (hour, min, sec, etc.): ";
  cin.ignore();
  getline(cin, dtUnit);

  //formula
  v = ds/dt;

  cout << fixed << showpoint << setprecision(4) << endl << "The velocity is: " << v << " " << dsUnit << "/" << dtUnit << endl;

  return;
}

void accel()
{
  cout << "ACCELERATION CALCULATOR" << endl;
  cout << "Enter velocity (must be a number/decimal): ";
  while (!(cin >> dv))
  {
    cout << "Must be a number/decimal: ";
    cin.clear();
    cin.ignore(100,'\n');
  }
  cout << "Enter unit for velocity (m, km, etc.): ";
  cin.ignore();
  getline(cin,dvUnit);
  cout << "Enter time of travel (must be a number/decimal): ";
  while (!(cin >> dt))
  {
    cout << "Must be a number/decimal: ";
    cin.clear();
    cin.ignore(100,'\n');
  }
  cout << "Enter unit for time (hour, min, sec, etc.): ";
  cin.ignore();
  getline(cin,dtUnit);

  //formula
  a = dv/dt;

  cout << fixed << showpoint << setprecision(4) << endl << "The acceleration is: " << a << " " << dvUnit << "/" << dtUnit << endl;

  return;
}

void motionMenu()
{
  char choice;

  cout << "MOTION CALCULATOR" << endl;
  cout << "1. Velocity (velocity-time)" << endl;
  cout << "2. Position (position-time)" << endl;
  cout << "3. Velocity-squared (velocity-position)" << endl;
  cout << "4. v-bar" << endl << endl;
  cout << "What would you like to calculate: ";
  cin >> choice;

  if (choice == '1')
    velocityTime();
  else if (choice == '2')
    positionTime();
  else if (choice == '3')
    velocitySquared();
  else if (choice == '4')
    findVbar();
  else
  {
    cout << endl << "Invalid selection" << endl;
    cout << "Answer Y to the following question to try again";
  }

  return;
}

void newtonSecond()
{
  cout << "NEWTON'S SECOND LAW CALCULATOR" << endl << endl;
  cout << "Enter mass (must be a number/decimal): ";
  while (!(cin >> m))
  {
    cout << "Must be a number/decimal: ";
    cin.clear();
    cin.ignore(100,'\n');
  }
  cout << "Enter unit for mass (kg, g, lb, etc.): ";
  cin.ignore();
  getline(cin,massUnit);
  cout << "Enter acceleration (must be a number/decimal): ";
  while (!(cin >> a))
  {
    cout << "Must be a number/decimal: ";
    cin.clear();
    cin.ignore(100,'\n');
  }
  cout << "Enter unit for acceleration (m/sec^2, km/min^2, etc.): ";
  cin.ignore();
  getline(cin,aUnit);

  //formula
  n = m*a;

  cout << fixed << showpoint << setprecision(4) << endl << "The value of N is: " << n << " " << massUnit << " " << aUnit << endl;

  return;
}

void weight()
{
  cout << "WEIGHT CALCULATOR" << endl << endl;
  cout << "Enter mass (must be a number/decimal): ";
  while (!(cin >> m))
  {
    cout << "Must be a number/decimal: ";
    cin.clear();
    cin.ignore(100,'\n');
  }
  cout << "Enter unit for mass (kg, lb, stone): ";
  cin.ignore();
  getline(cin,massUnit);

  //formula
  w = m*g;

  cout << fixed << showpoint << setprecision(4) << endl << "The weight is: " << w << " " << massUnit << endl;

  return;
}

void momentum()
{
  cout << "MOMENTUM CALCULATOR" << endl << endl;
  cout << "Enter mass (must be a number/decimal): ";
  while (!(cin >> m))
  {
    cout << "Must be a number/decimal: ";
    cin.clear();
    cin.ignore(100,'\n');
  }
  cout << "Enter unit for mass (kg, g, lb, etc.): ";
  cin.ignore();
  getline(cin,massUnit);
  cout << "Enter velocity (must be a number/decimal): ";
  while (!(cin >> dv))
  {
    cout << "Must be a number/decimal: ";
    cin.clear();
    cin.ignore(100,'\n');
  }
  cout << "Enter unit for velocity (m/s, km/min, etc.): ";
  cin.ignore();
  getline(cin,dvUnit);
  
  //formula
  p = m*dv;

  cout << fixed << showpoint << setprecision(4) << endl << "The momentum is: " << p << " " << massUnit << " " << dvUnit << endl;
  
  return;
}