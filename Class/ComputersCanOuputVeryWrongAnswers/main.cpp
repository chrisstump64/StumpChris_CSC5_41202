/* 
    Author: Christopher Dean Stump
    Created on January 11, 2016, 11:00 AM
    Purpose: Show how a computer can be wrong
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
    float qwntity=0.1f; //a value to add repeatedly
    float sum=0;//The result of a repetitive addition
    int nloops=10000000;//Numbers of times to loop
    float answer; //The computers answer
    //Inputs 
    for(int i=1;i<=nloops;i++){
        sum +=qwntity;
    }
    //calculate or map inputs to outputs
    answer=nloops*qwntity;
    
    //Output the results
    cout << "The Product answer = "<<answer<<endl;
    cout << "The sum answer = "<<sum<<endl;
    cout << "The Percent error = "<<(answer-sum)/answer*100<<"%"<<endl;
    return 0;
}

