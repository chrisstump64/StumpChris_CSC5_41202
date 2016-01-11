/* 
    Author: Christopher Dean Stump
    Created on January 6, 2016, 11:00 AM
    Purpose: Calculate energy drinkers
 */

// System Libraries
#include <iostream>
using namespace std;

// User Libraries

// Global Constants
const char CNVPERC=100;
// Function Prototypes

// Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short cstSrvy=16500; //Customers surveyed
    unsigned char peDrnk=15;      //Percentage surveyed energy drinkers
    unsigned char pcDrnk=58;      //Percentage surveyed energy citrus drinkers
    unsigned short neDrnk,ncDrnk; //Number of energy and citrus energy drinkers
    
    //Calculate or map inputs to outputs
    neDrnk=cstSrvy*peDrnk/CNVPERC;
    ncDrnk=neDrnk*pcDrnk/CNVPERC;
    
    //Output the results
    cout<<"Number of Customers Surveyed = "<<cstSrvy<<endl;
    cout<<"Percentage of Energy Drinkers = "<<static_cast<int>(peDrnk)<<"%"<<endl;
    cout<<"Percentage of Citrus Energy Drinkers = "<<static_cast<int>(pcDrnk)<<"%"<<endl;
    cout<<"Number of Energy Drinkers = "<<neDrnk<<endl;
    cout<<"Number of Energy Citrus Drinkers = "<<ncDrnk<<endl;
    //Exit stage right
    
    return 0;
}

