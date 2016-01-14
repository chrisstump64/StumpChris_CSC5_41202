/* 
 * Author: Christopher Dean Stump
 * Created on January 11, 2016, 8:55 AM
 * Purpose: Find the amount of water a well holds
 */

//Global Libraries
#include <iostream>
using namespace std;
//User Libraries

//Global constants
const char  CNVINFT= 12;   // The value to convert inches to feet 
const float CNVFTGL= 7.48f;// The value to convert cubic feet to gallons of water
const float PI  = 3.14f;   // The constant of pi

//Function prototypes
        
//Execution begins here 
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned int  hght, rad;       //the radius and height of  the well
    float vol, totwat;             //the volume of the well and the total amount of water in it

    //Take in inputs
    cout << "Enter the radius of the well. In inches"<<endl;
    cin  >> rad;
    cout <<"Enter the height of the well. In feet"<<endl;
    cin  >> hght;
    
    // Perform calculations
    float temp= static_cast<float>(rad)/CNVINFT;            //temp variable for volume calculation
    vol= PI*(temp*temp)*hght;                               //calculation for volume
    totwat= vol*CNVFTGL;                                    //calculation for the total amount of gallons
    
    //Make outputs
    cout << "The "<<hght<<" feet well with a radius of "<<rad<<" inches"<<endl;
    cout << "has a volume of "<<vol<<" cubic feet and can hold "<<totwat<<" gallons of water";
    return 0;
}

