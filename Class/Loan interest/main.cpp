/* 
 * Author: Christopher Dean Stump
 * Created on January 11, 2016, 7:39 AM
 * Purpose: Show how temperature of air changes the velocity
 */

//Global Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//User Libraries

//Global constants

//Function prototypes
        
//Execution begins here 
int main(int argc, char** argv) {
    //Declare and initialize variables
    int      l;         //The loan amount
    int      n;         //The number of payments
    float    r;         //The yearly interest rate
    float    intrst;    //The Monthly interest rate
    float    intrst2;   //The interest rate +1 to the power of n
    float    p;         //The payments per month
    float    totint;    //The total interest amount
    //Take in inputs
    cout << "What is your loan amount?"<<endl;
    cin  >> l;
    cout << "How many payments do you have to make?"<<endl;
    cin  >> n;
    cout << "What is your interest rate? Enter in decimal form "<<endl;
    cin  >> r;
    //Perform calculations
    intrst= r/12;
    intrst2= pow((1+intrst),n);
    p= (intrst*intrst2*l)/(intrst2-1);
    totint=n*p-l;
    //Outputs
    cout << setprecision(2)<< fixed;
    cout <<"Loan Amount $"<<setw(3)<<l<<endl;
    cout <<"Your payment is $"<<setw(3)<< p <<endl;
    cout <<"Your yearly interest rate is "<<setw(3)<<r*100<<"%"<<endl;
    cout <<"Your monthly interest rate is "<<setw(3)<<intrst*100<<"%"<<endl;
    cout <<"The Interest you will have to pay is $"<<setw(3)<<totint<<endl;
    
    
    return 0;
}

