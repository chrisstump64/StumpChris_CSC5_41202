/* 
    Author: Christopher Dean Stump
    Created on January 19, 2016, 8:30 AM
    Purpose: Make a menu with 10 problems
 */

// System Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;
// User Libraries

// Global Constants

// Function Prototypes

// Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short nSoltn; //Problem solution to display
    bool reDsply=true;
    // menu to display solution
    do {
    //Input Problem to display 
    cout<<"Assignments 3 Problem Set"<<endl;
    cout<<"Type 1 to display Gaddis 8thEd Chp5 Prob12"<<endl;
    cout<<"Type 2 to display Savitch 8thEd Chp3 Prob11"<<endl;
    cout<<"Type 3 to display Savitch 7thed Chp3 Prob1"<<endl;
    cout<<"Type 4 to display "<<endl;
    cout<<"Type 5 to display "<<endl;
    cout<<"Type 6 to display "<<endl;
    cout<<"Type 7 to display "<<endl;
    cout<<"Type 8 to display "<<endl;
    cout<<"Type 9 to display "<<endl;
    cout<<"Type 10 to display "<<endl<<endl;
    cin >>nSoltn;
    
        //Solutions to all the problems 
        switch(nSoltn){
            case 1:{ 
                //The Problem to solve
    cout<<endl<<"Solution to Gaddis 8thed Chp5 Prob12"<<endl;
    cout<<endl<<"Display a temperature table"<<endl;
    
    //Declare Variables 
    float slope=5.0f/9; //Slope of the line for temperature conversion c/f
    char intrcpt=-32;    //Scaled 9/5 deg c
    unsigned char c1=0, c2=100, f1=32,f2=212;    //Data pts of freezing and boiling
    
    
    //Loop to generate the degree Celsius and output the table
    cout<<"Fahrenheit   Celsius   Celsius"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    for(int f=f1;f<=f2;f++){
        float ceq=slope*(f+intrcpt);
        float cintrp=c1+static_cast<float>(f-f1)/(f2-f1)*(c2-c1);
        cout<<setw(10)<<f<<setw(10)<<ceq<<setw(10)<<cintrp<<endl;
    }
                break;
            }
            case 2:{
               
                break;
            }
            case 3:{
                
                break;
            }
            case 4:{
                cout<<"Problem 4"<<endl;
                break;
            }
            case 5:{
                cout<<"Problem 5"<<endl;
                break;
            }
            case 6:{
                cout<<"Problem 6"<<endl;
                break;
            }
            case 7:{
                cout<<"Problem 7"<<endl;
                break;
            }
            case 8:{
                cout<<"Problem 8"<<endl;
                break;
            }
            case 9:{
                cout<<"Problem 9"<<endl;
                break;
            }
            case 10:{
                cout<<"Problem 10"<<endl;
                break;
            }
            
            
            default:{
                cout<<"Exiting the program"<<endl;
                reDsply=false;
            }
        
        }
    }while(reDsply);
    
    return 0;
}

