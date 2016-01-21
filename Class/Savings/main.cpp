/* 
    Author: Christopher Dean Stump
    Created on January 21, 2016, 8:24 AM
    Purpose: Generate number and make into a roman numeral
 */

// System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// User Libraries

// Global Constants

// Function Prototypes

// Execution Begins Here
int main(int argc, char** argv) {
    //The Probelm to solve 
    cout<<endl<<"Solution to Savitch 9thEd Chp3 Prob3"<<endl;
    cout<<endl<<"The Roman Numeral Conversion Program"<<endl;
    
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables output the number
    unsigned char n1000s,  n100s, n10s, n1s; //The numbers of 1000s, 100s, 10s, and 1s
    unsigned short number=rand()%2001+1000;//[1000,3000]
    cout<<"The number to convert = "<<number<<endl;
    
    //Find the amount of roman numerals
    n1000s =(number-number%1000)/1000;      //Find the number of 1000s 
    number =     (number-n1000s*1000);      //Subract the 1000s
    n100s  =  (number-number%100)/100;      //Find the number of 100s
    number =       (number-n100s*100);      //Subtract the 100s
    n10s   =    (number-number%10)/10;      //Find the number of 10s
    n1s    =         (number-n10s*10);      //Find the number of 1s
   //output the number and it's components
    
    cout<<"The number of 1000's  = "<<static_cast<int>(n1000s)<<endl;
    cout<<"The number of 100's   = "<<static_cast<int>(n100s)<<endl;
    cout<<"The number of 10's    = "<<static_cast<int>(n10s)<<endl;
    cout<<"The number of 1's     = "<<static_cast<int>(n1s)<<endl;
    //output the results
    cout<<"The Roman numeral equivalent = ";
    
    //Output the 1000's
    switch(n1000s){
        case 3: cout<<"M";
        case 2: cout<<"M";
        case 1: cout<<"M";
                
    }
    //Output the 100's
    switch(n100s){
        case 9: cout<<"CM";break;
        case 8: cout<<"DCCC";break;
        case 7: cout<<"DCC";break;
        case 6: cout<<"DC";break;
        case 5: cout<<"D";break;
        case 4: cout<<"CD";break;
        case 3: cout<<"C";
        case 2: cout<<"C";
        case 1: cout<<"C";
                
    }
    //Output the 10's
    switch(n10s){
        case 9: cout<<"XC";break;
        case 8: cout<<"LXXX";break;
        case 7: cout<<"LXX";break;
        case 6: cout<<"LX";break;
        case 5: cout<<"L";break;
        case 4: cout<<"XL";break;
        case 3: cout<<"X";
        case 2: cout<<"X";
        case 1: cout<<"X";
                
    }
    switch(n1s){
        case 9: cout<<"IX";break;
        case 8: cout<<"VIII";break;
        case 7: cout<<"VII";break;
        case 6: cout<<"VI";break;
        case 5: cout<<"V";break;
        case 4: cout<<"IV";break;
        case 3: cout<<"I";
        case 2: cout<<"I";
        case 1: cout<<"I";
                
    }
    return 0;
}

