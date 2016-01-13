/* 
    Author: Christopher Dean Stump
    Created on January 13, 2016, 10:18 PM
    Purpose:Room capacity
 */

// System Libraries
#include <iostream>
using namespace std;

// User Libraries

// Global Constants

// Function Prototypes

// Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short numppl;         //Number of people in the room
    char           delta;          //Difference between seats
    const unsigned char MAXCAP=35; //Max capacity of room
 
    //Calculate or map inputs to outputs
    cout << "How many people are in the room"<<endl;
    cin  >> numppl;
    
    //Perform calculations
    delta=MAXCAP-numppl;
    
    //Output the results
    if (delta>=0){
        cout<<"Class will be held "<<endl;
        cout<<static_cast<int>(delta)<<" More students may attend"<<endl;
}else{
        cout<<"There is no room class cannot be held"<<endl;
        cout<<static_cast<int>(-delta)<<" students need to leave!"<<endl;
    }
    return 0;
}

