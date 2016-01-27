/* 
    Author: Christopher Dean Stump
    Created on January 25, 2016, 8:36 AM
    Purpose: Power function
 */

// System Libraries
#include <iostream>
#include <cmath>
using namespace std;

// User Libraries

// Global Constants

// Function Prototypes
int pow(int,int);
// Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    int x; //base of the problem
    int y; //exponent of the problem 
    int z; //solved problem
    //Inputs 
    cout<<"input a and e i.e. for a^b"<<endl;
    cin>>x>>y;
    //Calculate 
    z=pow(x,y);
    cout<<x<<"^"<<y<<" = "<<z<<endl;
    return 0;
}
int pow(int a,int b){ 
    if (b<=0) return 1;
    if (b==1) return a;
    int abd2= pow(a,b/2);
    if (b%2){
        return abd2*abd2*a;
    }else{
        return abd2*abd2;
    }
}
