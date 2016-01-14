/* 
    Author: Christopher Dean Stump
    Created on January 14, 2016, 8:22 AM
    Purpose: Find a students grade
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
    float grd;                     //The basal metabolic rate
    unsigned short score1, score2, score3; //The height, weight, and age of the user
    unsigned short fscore1, fscore2, fscore3;
    //Inputs 
    cout << "Enter your score for exercise 1"<<endl;
    cin  >> score1;
    cout << "Enter the highest score possible for exercise 1"<<endl;
    cin  >> fscore1;
    cout << "Enter your score for exercise 2"<<endl;
    cin  >> score2;
    cout << "Enter the highest score possible for exercise 2"<<endl;
    cin  >> fscore2;
    cout << "Enter your score for exercise 3"<<endl;
    cin  >> score3;
    //Perform calculations 
    if (gend='F')
        bmr= 655 +(4.3*wght)+(4.7*hght)+(6.8*age); //The formula for bmr for a female
    else if (gend='M')
        bmr= 66 +(6.3*wght)+(12.9*hght)+(6.8*age); //The formula for bmr for a male
    // Perform outputs
    cout<<"Your BMR is "<<bmr<<endl;
    return 0;
}

