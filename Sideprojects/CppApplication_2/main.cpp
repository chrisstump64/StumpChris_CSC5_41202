
/* 
 * File:   main.cpp
 * Author: Christopher Stump
 * Purpose: To find how much gold I can get in league
 * Created on January 7, 2016, 7:20 PM
 */

//System libraries
#include <iostream>
using namespace std;
//User Libraries

//Global Constants
const float CBASE=14.8f; //Caster minion base gold 
const float MBASE=19.8f; //Melee  minion base gold
const float SBASE=40.0f; //Cannon minion base gold
const char  TWAVE=7;  //Number of minions in a cannon wave
const char  NWAVE=6;  //Number of minions in a normal wave
//Function Prototypes

//Execution Begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float          smval=0.2f/90.0f; //The value for the increase of minions 
    float          cmval=0.5f/90.0f; //The value for the increase of a tank minions worth
    unsigned char  vcstmin, vmlemin, vcanmin;
    unsigned int   time, nminions ;
    
    //Map inputs to outputs take in inputs
    cout<<"How much time has passed in the game so far? In seconds please"<<endl;
    cin >>time;
    //Perform calculations for functions
    vcstmin=CBASE+smval*time;
    vmlemin=MBASE+smval*time;
    vcanmin =SBASE+cmval*time;
    nminions=TWAVE*
    //Output the results
    cout <<"A caster minion is worth "<<static_cast<int>(vcstmin)<<" gold"<<endl;
    cout <<"A melee  minion is worth "<<static_cast<int>(vmlemin)<<" gold"<<endl;
    cout <<"A tank  minion is worth  "<<static_cast<int>(vcanmin) <<" gold"<<endl;
    return 0;
}

