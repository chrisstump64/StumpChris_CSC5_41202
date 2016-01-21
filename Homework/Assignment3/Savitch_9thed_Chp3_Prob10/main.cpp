/* 
    Author: Christopher Dean Stump
    Created on January 14, 2016, 8:22 AM
    Purpose: Find A persons BMR
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
    unsigned char gend;             //The variables used to represent sex and their lifestyle
    float bmr;                      //The basal metabolic rate
    unsigned short wght, hght, age, lfstyl; //The height, weight, and age of the user
    unsigned char numchoc;
    //Inputs 
    cout << "Input your height in inches."<<endl;
    cin  >> hght;
    cout << "Input your weight in pounds."<<endl;
    cin  >> wght;
    cout << "Input your age in years."<<endl;
    cin  >> age;
    cout << "Input your gender. M or F"<<endl;
    cin  >> gend;
    cout <<"What is your lifestyle?  Enter 0 if you dont exercise at all 1 for Sedentary, 2 for  somewhat active, 3 for active, or 4 for highly active"<<endl;
    cin  >> lfstyl;
    //Perform calculations 
    cout << gend<<endl;
    if (gend='70')
        bmr= 655 +(4.3*wght)+(4.7*hght)+(6.8*age); //The formula for bmr for a female
    else if (gend='77')
        bmr= 66 +(6.3*wght)+(12.9*hght)+(6.8*age); //The formula for bmr for a male
        
    
    cout <<bmr<<endl;
    switch(static_cast<int>(lfstyl)){
        case 1: bmr=bmr+(bmr*.2f);break;
        case 2: bmr=bmr+(bmr*.3f);break;
        case 3: bmr=bmr+(bmr*.4f);break;
        case 4: bmr=bmr+(bmr*.5f);break;
        default:bmr;break;
    }
    cout<<bmr<<endl;
    numchoc=bmr/230;
    
    // Perform outputs
    cout<<"Your BMR is "<<bmr<<endl;
    cout<<"You can eat "<<static_cast<int>(numchoc)<<" chocolate bars and maintain your weight"<<endl;
    return 0;
}

