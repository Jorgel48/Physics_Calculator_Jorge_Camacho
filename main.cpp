#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include "Input_Validation.h"
using namespace std;
//Prototypes
void handleOption(char);
void showMenu();



int main() 
{
  char userOption;
  do 
  {
  showMenu();
   cout << "Type your option" << endl;
    userOption = validateChar(userOption);
    handleOption(userOption);
    
  }
  while(userOption !='G');
 
}
void showMenu()
{
  cout << "\nMENU" << endl; 
  cout << "A: Velocity " <<endl; 
  cout << "B: Acceleration " << endl; 
  cout << "C: Motion" << endl; 
  cout << "D: Newton's Second Law" << endl; 
  cout << "E: Weight" << endl;
  cout << "F: Momentum" << endl;
  cout << "G: Exit" << endl;
  cout << "X: clear the screen" << endl;
  
} 


void Calculatevelocity()
{
  double v = 0.0;  //Dr_T online, Jorge // Be sure to declare and initilize the variable
  double t = 0.0;
  cout << "Please enter your speed ";
  v = validateDouble(v);
  cout << "Please enter your time";
  t = validateDouble(t); //on the right track Jorge, note my additions here 
  double ds = v/t;
  //Ask the user for units of "v"   
  string vUnits = "";
  cout << "What are your speed units (i.e. Miles): ";
  vUnits = validateString(vUnits);
  //Ask the user for units of "t" 
  string tUnits = ""; 
  cout << "What are your speed tUnits (i.e. Hour): ";
  tUnits = validateString(tUnits);
  string unitsAppend = " " + vUnits + "/" + tUnits; 
  cout << "Velocity = " << ds << unitsAppend << endl; //append sUnits << "/" << tUnits to the answer (Note how the answer has the number and the units appended Dr_T)
}
void Calculateacceleration()
{
   double v = 0.0;

   double t = 0.0;
   cout << "Please enter your speed ";
   v = validateDouble(v);
   cout << "Please enter your time";
   t = validateDouble(t);
   double dt = v/t;
   //Ask the user for units of "v"
   string vUnits = "";
   cout << "What is your  vUnits (i.e. velocity per second): ";
   vUnits = validateString(vUnits);
   //Ask the user for units of "t"
   string tUnits = "";
   cout <<"What is your speed tUnits (i.e. Secound): ";
   tUnits = validateString(tUnits);
   string unitsAppend = " " + vUnits + "/" + tUnits;
   cout << "Accelaretion = " << dt << unitsAppend << endl;
   //append vUnits << "/" << tUnits to the answer 
}
void Calculatemotion()
{
  double v = 0.0;
  double v0 = 0.0;
  double at = 0.0;
  cout << "Please enter velocity ";
  v = validateDouble(v);
  cout << "Please enter initial velocity ";
  v0 = validateDouble(v0);
  cout << "Please enter accelaration '*' time ";
  at = validateDouble(at);
  double result = v/v0*at;
  //Ask the user for units of "v"
  string vUnits = "";
  cout << "What is your speed vUnits ( i.e. Velocity): ";
  vUnits = validateString(vUnits);
  //Ask the user for units of "v0"
  string v0Units = "";
  cout << "What is your  speed v0Units (i.e. initial velocity): ";
  v0Units = validateString(v0Units);
  //Ask the user for units of "at"
  string atUnits = "";
  cout << "What is your speed atUnits (i.e. accelaration * time): ";
  atUnits = validateString(atUnits);
  string unitsAppend = " " + vUnits + v0Units;
  cout << "Motion = " << result << v << v0 << at << unitsAppend << endl;
}
void CalculateNewtonssecondlaw()
{
  double f = 0.0;
  double m = 0.0;
  double a = 0.0; 
  double  result;
  cout << "Please enter mass ";
  m = validateDouble(m);
  cout << "Please enter acceleration";
  a = validateDouble(a);
  //Ask the user for units of "f"
  string fUnits = "";
  cout << "What is the meters fUnits (i.e. force): " << endl;
  fUnits = validateString(fUnits);
  //Ask the user for the units of 'm'
  string mUnits = "";
  cout << "What is the matter mUnits (i.e. mass): " << endl;
  mUnits = validateString(mUnits);
  f = m * a;
  string unitsAppend = " " + fUnits + mUnits;
  cout << "Newton's secondlaw = " << f << unitsAppend << endl;
}  
void Calculateweight()
{ 
  double w = 0.0;
  double m = 0.0;
  double g = 0.0;
  g = 9.8;
  cout << "Please enter mass ";
  m = validateDouble(m);
  cout << "Please enter gravity";
  g = validateDouble(g);
  //Ask the user for units of 'm'
  string mUnits = "";
  cout << "Please enter the mUnits (i.e. mass): " << endl;
  mUnits = validateString(mUnits);
  //Ask the user for the units of 'g'
  string gUnits = "";
  cout << "Please enter the gUnits (i.e. gravity): " << endl;
  gUnits = validateString(gUnits);
  w = m * g;
  string unitsAppend = " " + mUnits + gUnits;
  cout << "Weight = " << w << unitsAppend << endl;
  
}
void Calculatemomentum()
{ 
  double p = 0.0;
  double m = 0.0;
  double v = 0.0;
  p = m*v;
  cout << "Please enter momentum ";
  m = validateDouble(m);
  cout << "Please enter velocity ";
  v = validateDouble(v);
  //Ask the user for units of 'm'
  string mUnits = "";
  cout << "Please enter the mUnits of (i.e. mass): " << endl;
  mUnits = validateString(mUnits);
  //Ask the user for the units  of 'v'
  string vUnits = "";
  cout << "Please enter the vUnits of (i.e. velocity): " << endl;
  vUnits = validateString(vUnits);
  p = m / v;
  string unitsApped = " " + mUnits + vUnits;
  cout << "Momentum = " << unitsApped << endl; 
}
void handleOption(char userOption)
{
  if (userOption == 'a'|| userOption == 'A') 
  {
    cout << "calculating velocity " << endl;
    Calculatevelocity();
  }
    else if (userOption == 'b' || userOption == 'B')
    {
      cout << "Acceleration" << endl;
      Calculateacceleration();
    }
    else if (userOption == 'c' || userOption == 'C')
    {
      cout << "Motion" << endl;
      Calculatemotion();
    }
    else if (userOption == 'd' || userOption == 'D')
    {
      cout << "Newton's second Law " << endl;
      CalculateNewtonssecondlaw();
    }
    else if (userOption == 'e' || userOption == 'E')
    {
      cout << "Weight" << endl;
      Calculateweight();
    }
    else if (userOption == 'f' || userOption == 'F')
    {
      cout << "Momentum" << endl;
      Calculatemomentum();
    }
    else if (userOption == 'g' || userOption == 'G')
    {
      cout << "Exit" << endl;
      exit(0);
    }
    else if (userOption == 'x' || userOption == 'X')
    {
      cout << "\x1b[2J\x1b[1;1H" << endl;
    }
    else 
    {
      exit(0);
    }
}
    
      

     
   
