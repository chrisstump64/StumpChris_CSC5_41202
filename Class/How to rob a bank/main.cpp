/* 
    Author: Christopher Dean Stump
    Created on January 6, 2016, 4:00 PM
    Purpose: How many does it take?
 */

// System Libraries
#include <iostream>
using namespace std;

// User Libraries

// Global Constants
const char  WTBILL= 1; //weight in grams
const float CNVLBS = 1.0f/453.5f; //conversion from grams to pounds
// Function Prototypes

// Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned int   amtStl;   //Amount to steal
    unsigned short denom;    //Bill denomination
    unsigned char  wtPers=80;//Weight person can carry in lbs
    unsigned char  nPerps;   //number of perps
    //Calculate or map inputs to outputs
    cout << "How much money would you like to acquire?"<<endl;
    cin  >> amtStl;
    cout << "What is the Bill denomination desired?"<<endl;
    cin  >> denom;
    
    //Calculate the number of perps needed
    nPerps=CNVLBS*amtStl*WTBILL/denom/wtPers+1; 
    
    //Output the results
    cout<<"Amount Desired = $"<<amtStl<<endl;
    cout<<"Denomination Desired = $"<<denom<<endl;
    cout<<"Number of Individuals required on the job = "<<static_cast<int>(nPerps)<<endl;
    //Exit stage right
    
    return 0;
}

