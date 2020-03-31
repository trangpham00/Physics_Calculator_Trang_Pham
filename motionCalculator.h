#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
#include <cmath>
#include <string.h>

using namespace std;

//Prototypes
void velocityTime();
void positionTime();
void velocitySquared();
void findVbar();

//Variables

//Definitions
void velocityTime()
{
  double v = 0.0, v0 = 0.0;
  double a = 0.0;
  double t = 0.0;
  string tUnit, vUnit;

  cout << "Enter initial velocity (Must be a number/decimal): ";
  while (!(cin >> v0))
  {
    cout << "Must be a number/decimal: ";
    cin.clear();
    cin.ignore(100,'\n');
  }
  cout << "Enter unit for initial velocity (m, km, etc.): ";
  cin.ignore();
  getline(cin,vUnit);
  cout << "Enter acceleration (Must be a number/decimal): ";
  while (!(cin >> a))
  {
    cout << "Must be a number/decimal: ";
    cin.clear();
    cin.ignore(100,'\n');
  }
  cout << "Note: unit for acceleration should be the same as the unit entered for initial velocity" << endl;
  cout << "Enter time of travel (Must be a number/decimal): ";
  while (!(cin >> t))
  {
    cout << "Must be a number/decimal: ";
    cin.clear();
    cin.ignore(100,'\n');
  }
  cout << "Enter unit for time (hour, min, sec, etc.): ";
  cin.ignore();
  getline(cin,tUnit);

  // /Formula
  v = v0 + a*t;

  cout << fixed << showpoint << setprecision(4) << endl << "The final velocity is: " << v << " " << vUnit << "/" << tUnit << endl;

  return; 
}

void positionTime()
{
  double v = 0.0, v0 = 0.0;
  double a = 0.0;
  double t = 0.0;
  double s = 0.0, s0 = 0.0;
  string sUnit, tUnit;

  cout << "Enter initial position (must be a number/decimal): ";
  while (!(cin >> s0))
  {
    cout << "Must be a number/decimal: ";
    cin.clear();
    cin.ignore(100,'\n');
  }
  cout << "Enter unit for initial position (km, m, etc.): ";
  cin.ignore();
  getline(cin,sUnit);
  cout << "Enter initial velocity (Must be a number/decimal): ";
  while (!(cin >> v0))
  {
    cout << "Must be a number/decimal: ";
    cin.clear();
    cin.ignore(100,'\n');
  }
  cout << "Note: unit for initial velocity should be the same as the unit entered for initial position" << endl;
  cout << "Enter acceleration (Must be a number/decimal): ";
  while (!(cin >> a))
  {
    cout << "Must be a number/decimal: ";
    cin.clear();
    cin.ignore(100,'\n');
  }
  cout << "Note: unit for acceleration should be the same as the unit entered for initial position" << endl;
  cout << "Enter time of travel: ";
  while (!(cin >> t))
  {
    cout << "Must be a number/decimal: ";
    cin.clear();
    cin.ignore(100,'\n');
  }
  cout << "Enter unit for time of travel (hour, min, sec, etc.): ";
  cin.ignore();
  getline(cin,tUnit);

  //Formula
  s = s0 + v0*t + (a*(t*t))/2;

  cout << fixed << showpoint << setprecision(4) << endl << "The final position (displacement) is: " << s << " " << sUnit << " in " << t << " " << tUnit << endl;

  return;
}

void velocitySquared()
{
  double v = 0.0, v0 = 0.0, vsq = 0.0;
  double a = 0.0;
  double s = 0.0, s0 = 0.0;
  string vUnit;

  cout << "Enter initial velocity (Must be a number/decimal): ";
  while (!(cin >> v0))
  {
    cout << "Must be a number/decimal: ";
    cin.clear();
    cin.ignore(100,'\n');
  }
  cout << "Enter unit for initial velocity (km, m, etc.): ";
  cin.ignore();
  getline(cin,vUnit);
  cout << "Enter acceleration (Must be a number/decimal): ";
  while (!(cin >> a))
  {
    cout << "Must be a number/decimal: ";
    cin.clear();
    cin.ignore(100,'\n');
  }
  cout << "Note: unit for acceleration should be the same as the unit entered for initial velocity" << endl;
  cout << "Enter initial position (must be a number/decimal): ";
  while (!(cin >> s0))
  {
    cout << "Must be a number/decimal: ";
    cin.clear();
    cin.ignore(100,'\n');
  }
  cout << "Note: unit for initial position should be the same as the unit entered for initial velocity" << endl;
  cout << "Enter final position (must be a number/decimal): ";
  while (!(cin >> s))
  {
    cout << "Must be a number/decimal: ";
    cin.clear();
    cin.ignore(100,'\n');
  }
  cout << "Note: unit for final position should be the same as the unit entered for initial velocity" << endl;

  //Formula
  vsq = v0*v0 + 2*a*(s-s0);

  cout << fixed << showpoint << setprecision(4) << endl << "The velocity-squared is: " << vsq << " " << vUnit << endl;

  return;
}

void findVbar()
{
  double v = 0.0, v0 = 0.0, vBar;
  string vUnit;

  cout << "Enter initial velocity (Must be a number/decimal): ";
  while (!(cin >> v0))
  {
    cout << "Must be a number/decimal: ";
    cin.clear();
    cin.ignore(100,'\n');
  }
  cout << "Enter unit for initial velocity (km, m, etc.): ";
  cin.ignore();
  getline(cin,vUnit);
  cout << "Enter final velocity (Must be a number/decimal): ";
  while (!(cin >> v))
  {
    cout << "Must be a number/decimal: ";
    cin.clear();
    cin.ignore(100,'\n');
  }
  cout << "Note: unit for final velocity should be the same as the unit entered for initial velocity" << endl;
  
  //Formula
  vBar = (v + v0)/2;

  cout << fixed << showpoint << setprecision(4) << endl << "The value for v-bar is: " << vBar << " " << vUnit << endl;

  return;
}