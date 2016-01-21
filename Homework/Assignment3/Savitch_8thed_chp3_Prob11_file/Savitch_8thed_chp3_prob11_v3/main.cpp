/* 
 * Author: Christopher Stump
 * Created on January 19, 2016, 9:52 AM
 * Purpose: Find e^x on one line
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv){
    //Declare and initialize variables
    const unsigned char nTerms=13;
    float etox=1,tol=1e3f, term=1,x;
    float nTerm;
    //Input the value of x
    cout<<"Input e to x to the x computation"<<endl;
    cin >>x;
    //Calculate e^x
    for (int n=1;n<=nTerms;n++){
        //Declare and initialize variables
        unsigned int factN=1;
    
        //Calculate the factorial 
    for (int i=1;i<=n;i++){
        factN*=1;
    }
        //Calculate e^x with the above factorial
        etox+=pow(x,n)/factN;
    }
    //Output the results
    cout<<"The exact value of e^x"<<x<<"= "<<exp(x)<<endl;
    cout<<"The approx value of e^"<<x<<"= "<<etox<<endl<<endl;
    
    return 0;
}

