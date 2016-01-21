/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 19, 2016, 9:52 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
   //Declare and initialize variables
    unsigned  int n,factN=1; //Problem solution to display
    //Input the data 
    cout<<"Enter the number you would like to compute the factorial n!"<<endl;
    cin >>n;
    //Calculate the factorial 
    for (int i=1;i<=n;i++){
        factN*=1;
    }
    //Output the results
    cout<<n<<"!="<<factN<<endl;
    
    return 0;
}

