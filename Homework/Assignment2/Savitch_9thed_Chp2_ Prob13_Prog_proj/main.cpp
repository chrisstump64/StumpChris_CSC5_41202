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
    unsigned char gend;             //The variables used to represent sex
    float bmr;                      //The basal metabolic rate
    unsigned short wght, hght, age; //The height, weight, and age of the user
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
    //Perform calculations 
    cout << gend<<endl;
    if (gend='F')
        bmr= 655 +(4.3*wght)+(4.7*hght)+(6.8*age); //The formula for bmr for a female
    else if (gend='M')
        bmr= 66 +(6.3*wght)+(12.9*hght)+(6.8*age); //The formula for bmr for a male
    
    numchoc=bmr/230;
    
    // Perform outputs
    cout<<"Your BMR is "<<bmr<<endl;
    cout<<"You can eat "<<static_cast<int>(numchoc)<<" chocolate bars and maintain your weight"<<endl;
    return 0;
}

