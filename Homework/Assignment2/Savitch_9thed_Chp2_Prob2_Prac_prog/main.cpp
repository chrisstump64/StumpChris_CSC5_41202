/* 
    Author: Christopher Dean Stump
    Created on January 13, 2016, 10:50 PM
    Purpose: Calculate the square root by the Babylonian/Newton Method
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
    float    r, guess;//Intermediate values which asymptotically approach sqrt(n)
    float    n;       //Input the value to obtain its square root 
 
    //Input data
    cout << "Input the value to computer the sqrt of?"<<endl;
    cin  >> n;
    
    //Approximate the square root first pass
    guess=n/2; //Only perform once to start the process
    r=n/guess;
    guess=(guess+r)/2;
    //Output the results
    cout << "The input value    = "<<n<<endl;
    cout << "sqrt ("<<n<<")="<<endl;
    cout << "The first pass r   = "<<r<<endl;
    cout << "The first guess    = "<<guess<<endl;
    
    //Approximate the square root second pass
    r=n/guess;
    guess=(guess+r)/2;
    //Output the results
    cout << "The input value    = "<<n<<endl;
    cout << "sqrt ("<<n<<")="<<endl;
    cout << "The second pass r   = "<<r<<endl;
    cout << "The second guess    = "<<guess<<endl;
    
    //Approximate the square root third pass
    r=n/guess;
    guess=(guess+r)/2;
    //Output the results
    cout << "The input value    = "<<n<<endl;
    cout << "sqrt ("<<n<<")="<<endl;
    cout << "The third pass r   = "<<r<<endl;
    cout << "The third guess    = "<<guess<<endl;
    
    //Approximate the square root fourth pass
    r=n/guess;
    guess=(guess+r)/2;
    //Output the results
    cout << "The input value    = "<<n<<endl;
    cout << "sqrt ("<<n<<")="<<endl;
    cout << "The fourth pass r   = "<<r<<endl;
    cout << "The fourth guess    = "<<guess<<endl;

//Approximate the square root fifth pass
    r=n/guess;
    guess=(guess+r)/2;
    //Output the results
    cout << "The input value    = "<<n<<endl;
    cout << "sqrt ("<<n<<")="<<endl;
    cout << "The fifth pass r   = "<<r<<endl;
    cout << "The fifth guess    = "<<guess<<endl;    

//Approximate the square root sixth pass
    r=n/guess;
    guess=(guess+r)/2;
    //Output the results
    cout << "The input value    = "<<n<<endl;
    cout << "sqrt ("<<n<<")="<<endl;
    cout << "The sixth pass r   = "<<r<<endl;
    cout << "The sixth guess    = "<<guess<<endl;
    return 0;
}

