/* 
    Author: Christopher Dean Stump
    Created on January 6, 2016, 4:00 PM
    Purpose: Quarters, Nickels, Dimes
 */

// System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

// User Libraries

// Global Constants
const char CNVQRTR=25;  // cents per quarter
const char CNVDIME=10;  // cents per dime
const char CNVNIKL=5;   // cents per nickel
const char CNVPND=100;  // conversion from pennies to dollars
// Function Prototypes

// Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short  nickel; //the number of nickels
    unsigned short  dime;   //the number of dimes
    unsigned short  quarter;//the number of quarters
    unsigned short  total;  //the total of all value of all coins
  
    //Calculate or map inputs to outputs
    cout << "How many nickels do you have?"<<endl;
    cin  >> nickel;
    cout << "How many dimes do you have?"<<endl;
    cin  >> dime;
    cout << "How many quarters do you have?"<<endl;
    cin  >> quarter;
    
    //Calculate the total
    total = nickel*CNVNIKL+ dime*CNVDIME + quarter*CNVQRTR; // the calculation of total 
    
    //Output the result
    cout << setprecision(2) <<fixed;
    cout << "Number of Quarters input = "<<quarter<<endl;
    cout << "Number of Dimes    input = "<<dime<<endl;
    cout << "Number of Nickels  input = "<<nickel<<endl;
    cout << "The Dollar amount $"<<1.0*total/CNVPND<<endl;
    //Exit stage right
    
    return 0;
}

