/* 
    Author: Christopher Dean Stump
    Created on January 5, 2016, 9:30 AM
    Purpose: Show that you cannot divide by zero
 */

    // System Libraries
    #include <iostream>
    using namespace std;

    // User Libraries

    //Global Constants

    // Function Prototypes

    // Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    int numpods,perpod,totpea;// The number of pods, the number of peas per pod, and the total number of pods
    
    //Calculate or map inputs to outputs
    cout << "Hello\n";         // Greeting
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    cin  >> numpods;           // where the user inputs the amount of pods
    cout << "Enter the number of peas in a pod:\n";
    cin  >> perpod;            // where the user inputs 0 to the amount of peas per pod  
    totpea = numpods / perpod; // The equation to determine the total number of peas
    
    //Output the results
    cout << "If you have ";
    cout << numpods;         // The number of pods the user put in
    cout << " pea pods\n";
    cout << "and ";
    cout << perpod;          // The number of peas per pod the user put in
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << totpea;          // The calculated total number of peas
    cout << " peas in all the pods.\n";
    cout << "Good-bye\n";    // Closing
    //Exit stage right
    return 0;
}

