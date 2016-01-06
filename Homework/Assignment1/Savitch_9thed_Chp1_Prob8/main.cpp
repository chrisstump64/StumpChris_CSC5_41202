/* 
    Author: Christopher Dean Stump
    Created on January 6, 2016, 4:00 PM
    Purpose: Quarters, Nickels, Dimes
 */

// System Libraries
#include <iostream>
using namespace std;

// User Libraries

// Global Constants
const char cnvqrtr=25;  // cents per quarter
const char cnvdime=10;  // cents per dime
const char cnvnikl=5;   // cents per nickel
const char cnvPnD=100;  // conversion from pennies to dollars
// Function Prototypes

// Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short  nickel; //the number of nickels
    unsigned short  dime;   //the number of dimes
    unsigned short  quarter;//the number of quarters
    unsigned short total;  //the total of all value of all coins
  
    //Calculate or map inputs to outputs
    cout << "How many nickels do you have?"<<endl;
    cin  >> nickel;
    cout << "How many dimes do you have?"<<endl;
    cin  >> dime;
    cout << "How many quarters do you have?"<<endl;
    cin  >> quarter;
    
    //Calculate the total
    total = nickel*cnvnikl+ dime*cnvdime + quarter*cnvqrtr; // the calculation of total 
    
    //Output the result
    cout<<"Number of Quarters input = "<<quarter<<endl;
    cout<<"Number of Dimes    input = "<<dime<<endl;
    cout<<"Number of Nickels  input = "<<nickel<<endl;
    cout<<"The Dollar amount $"<<1.0*total/cnvPnD<<endl;
    //Exit stage right
    
    return 0;
}

