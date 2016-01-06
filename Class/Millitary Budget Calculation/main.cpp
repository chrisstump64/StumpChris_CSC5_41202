/* 
    Author: Christopher Dean Stump
    Created on January 4, 2016, 10:18 AM
    Purpose: Check out IDE, HelloWorld
 */

// System Libraries
#include <iostream>
using namespace std;

// User Libraries

// Global Constants
const char cnvPerc=100;
// Function Prototypes

// Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float milBdgt=600e9f; 
    float fedBdgt=3.82e12f;
    float percMil;
    
    //Calculate or map inputs to outputs
    percMil = milBdgt/fedBdgt*cnvPerc;
    
    //Output the results
    cout<<"The Milatary budget = $"<<milBdgt<<endl;
    cout<<"The Federal budget  = $"<<fedBdgt<<endl;
    cout<<"The percentage of the Federal Budget attributed to the Military Budget"<<endl;
    cout<<percMil<<"%"<<endl;
    //Exit stage right
    
    return 0;
}

