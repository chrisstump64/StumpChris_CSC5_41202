/* 
 * Author: Christopher Dean Stump
 * Created on January 11, 2016, 7:39 AM
 * Purpose: Show how temperature of air changes the velocity
 */

//Global Libraries
#include <iostream>
using namespace std;
//User Libraries

//Global constants

//Function prototypes
        
//Execution begins here 
int main(int argc, char** argv) {
    //Declare and initialize variables
    int stemp;   //starting temp in celsius
    float vlcty; //variable to represent velocity

    //Take in inputs
    cout << "Enter the starting temp in celsius."<<endl;
    cin  >> stemp;
    // Perform calculations
    vlcty= 331.3+0.61*stemp;
    
    //Make outputs
    cout<<"At "<<stemp<<" degrees Celsius the velocity of sound is "<<vlcty<<"m/s"<<endl;
    stemp ++;
    vlcty= 331.3+0.61*stemp;
    cout<<"At "<<stemp<<" degrees Celsius the velocity of sound is "<<vlcty<<"m/s"<<endl;
    stemp ++;
    vlcty= 331.3+0.61*stemp;
    cout<<"At "<<stemp<<" degrees Celsius the velocity of sound is "<<vlcty<<"m/s"<<endl;
    return 0;
}

