/* 
 * Author: Christopher Stump
 * Created on January 19, 2016, 9:52 AM
 * Purpose: Find e^x
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv){
    //Declare and initialize variables
    const unsigned char nTerms=2;
    float rate=1,x=1, Pi;
    unsigned int denom;
    //Input the value of x
    //Calculate e^x
    for (int n=1;n<=nTerms;n++){
        Pi=4*(rate);
        cout<<rate<<endl;
        denom+=2;
        rate=rate+((x/denom)*--1);
        cout<<rate<<endl;
    }
    //Output the results
    cout<<"Pi is "<<Pi<<endl;
    return 0;
}

