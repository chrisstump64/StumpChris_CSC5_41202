/* 
    Author: Christopher Dean Stump
    Created on January 13, 2016, 10:50 PM
    Purpose: Calculate the square root by the Babylonian/Newton Method
    version 2: Use loop to end calculation
 */

// System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// User Libraries

// Global Constants

// Function Prototypes

// Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float    r, guess; //Intermediate values which asymptotically approach sqrt(n)
    float    n;        //Input the value to obtain its square root 
    float    tol=0.001f; //Accuracy of the results/tolerance
    int      counter=0;//See how many loops it took to get the answer
    //Input data
    cout << "Input the value to computer the sqrt of?"<<endl;
    cin  >> n;
    
    //Approximate the square root first pass
    guess=n/2; //Only perform once to start the process
    
     //Output the results
    cout << "The input value    = "<<n<<endl;
    cout << "sqrt ("<<n<<")="<<endl;
    
    //Approximate the square root second pass
    while(abs((r-guess)/guess)*100>tol){
        r=n/guess;
        guess=(guess+r)/2;
        counter++;
    }
    //Output the results
    cout << "The  r    = "<<r<<endl;
    cout << "The guess = "<<guess<<endl;
    cout << "The counter executed "<<counter<<"times"<<endl;
    return 0;
}

