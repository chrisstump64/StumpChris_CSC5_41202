/* 
    Author: Christopher Dean Stump
    Created on January 6, 2016, 4:00 PM
    Purpose: How many does it take?
 */

// System Libraries
#include <iostream>     //I/O Library
#include <cstdlib>      //Random function location
#include <cmath>        //Math functions
#include <ctime>        //Time to set the random seed
#include <iomanip>      //Format Library
#include <fstream>      //Reading/writing to a file
using namespace std;

// User Libraries

// Global Constants
const float GRAVITY=32.174f; //Sea Level Earth Acceleration Constant ft/sec^2

// Function Prototypes

// Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables
    ofstream out;       //Declare a file stream object called out
    float drpTime,Dist; //Time in sec and Distance in feet
    
    //Inputting the time with a random number and opening a file
    drpTime=rand()%11+10;   //10,20 secs
    const int SIZE=21;
    char fileNam[SIZE]="Dropdistance.dat";
    out.open(fileNam);
    //Calculate the distance
    Dist=0.5f*GRAVITY*drpTime*drpTime; 
    
    //Output the results
    
    cout<<"Drop Time = "<<drpTime<<"(sec)"<<endl;
    cout<<fixed<<setprecision(3)<<showpoint;
    cout<<"Free Fall Distance x2="<<setw(9)<<Dist<<"(ft)"<<endl;
    
    //Calculate the distance
    Dist=0.5f*GRAVITY*pow(drpTime,2);
    
    //Output the results
    cout<<"Free Fall Distance pow="<<setw(9)<<Dist<<"(ft)"<<endl;
    //Calculate the distance
    Dist=0.5f*GRAVITY*drpTime*drpTime;
    
     //Output the results
    cout<<"Free Fall Distance exp(log)="<<setw(9)<<Dist<<"(ft)"<<endl;
    
    //Output the results
    out<<fixed<<setprecision(3)<<showpoint;
    out<<"Free Fall Distance explog="<<setw(9)<<Dist<<"(ft)"<<endl;
    //Exit stage right and remember to close files
    out.close();
    return 0;
}

