/* 
    Author: Christopher Dean Stump
    Created on January 4, 2016, 10:18 AM
    Purpose: Convert coins to cents 
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
    int nickel;
    int dime;
    int quarter;
    int cents;
    //Calculate or map inputs to outputs
    cout << "How many nickels do you have?\n";
    cin  >> nickel;
    cout << "How many dimes do you have?\n";
    cin  >> dime;
    cout << "How many quarters do you have?\n";
    cin  >> quarter;
    cents = nickel*5+ dime*10 + quarter*25;
    //Output the result
    cout << "You have ";
    cout << cents;
    cout << " cents in change\n";
    //Exit stage right
    
    return 0;
}

