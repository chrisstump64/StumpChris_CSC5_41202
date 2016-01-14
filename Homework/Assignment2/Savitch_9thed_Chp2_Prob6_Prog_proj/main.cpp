/* 
    Author: Christopher Dean Stump
    Created on January 14, 2016, 11:00 AM
    Purpose: Calculate Paycheck, Straight Time
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
    float          payRate=16.78f, gpay, npay;             // Pay Rate in $'s/hour, the gross pay, the net pay,
    float          sstax=0.06f, fedtax=0.14f, sttax=0.05f; //The social security tax, the federal tax, the state tax,
    unsigned short hrsWrkd, vdpdnts, ndpdnts;              // Hours worked (hrs), the value taken away by dependents, the number of dependents
    //Take in inputs
    cout << "Input how many hours you worked"<<endl;
    cin  >> hrsWrkd;
    cout >> "Input the number of dependents you have"<<endl;
    cin  >> ndpdnts;
    //Calculation to find the negative value of dependents
    vdpdnts=ndpdnts*35;
    //If statment to calculate gross pay
    if (hrsWrkd>40){                                        
        gpay=(hrsWrkd*payRate)+((hrsWrkd-40)*(payRate*1.5));
    }else{ (hrsWrkd<=40)
        gpay=hrsWrkd*payRate;
    }
    cout <<
    npay=gpay-(gpay*sstax)+(gpay*fedtax)+(gpay*sttax)+vdpdnts+10
    //Output the results
    cout << "Pay Rate     = $"<<payRate<<"'s/hr"<<endl;                // Output of Pay Rate
    cout << "Hours Worked =  "<<hrsWrkd<<" hrs"<<endl;                 // Output of hours worked
    cout << "Pay Check    = $"<<gpay<<endl;                            // Output of Pay Check
    
    //Exit stage right
    return 0;
}

