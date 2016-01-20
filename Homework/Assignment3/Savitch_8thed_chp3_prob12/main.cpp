/* 
 * Author: Christopher Stump
 * Created on January 19, 2016, 9:52 AM
 * Purpose: Find pi
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv){
    //Declare and initialize variables
    const unsigned char nTerms=100;
    float rate=2,x=1, Pi, chg=0;
    //find pi
    for (int n=1,j=1;n<=nTerms;n++,j+=2){
        Pi=4.0*(rate);
        cout<<"First Rate "<<rate<<endl;
        rate=rate+chg;
        chg= 1/static_cast<float>(j);
   
        chg*= -1.0f;
        cout<<"change"<<chg<<endl;
        cout<<"Rate after change "<<rate<<endl;
    }
    //Output the results
    cout<<"Pi is "<<Pi<<endl;
    return 0;
}

