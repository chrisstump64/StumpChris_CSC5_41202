/* 
    Author: Christopher Dean Stump
    Created on January 5, 2016, 9:30 AM
    Purpose: Copy Display 1.8, Tell how many peas there are 
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
    unsigned short numpods;    // The Number of Peapods
    unsigned short perpod;     // The Number of Peas per pod
    unsigned int   totpea;     // The Total number of Peas 
    
    //Calculate or map inputs to outputs
    cout << "Press return after entering a number."<<endl;
    cout << "Enter the number of pods:"<<endl;
    cin  >> numpods;           // The users input on the amount of pods
    cout << "Enter the number of peas in a pod:"<<endl;
    cin  >> perpod;            // The users input on the amount of peas per pod 
    totpea = numpods * perpod; // The equation to determine the total number of peas
    
    //Output the results
    cout << "If you have ";
    cout << numpods;
    cout << " pea pods"<<endl;
    cout << "and ";
    cout << perpod;
    cout << " peas in each pod, then"<<endl;
    cout << "you have ";
    cout << totpea;
    cout << " peas in all the pods."<<endl;
    //Exit stage right
    return 0;
}

