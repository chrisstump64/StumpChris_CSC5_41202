/* 
    Author: Christopher Dean Stump
    Created on January 25, 2016, 8:36 AM
    Purpose: Power function
 */

// System Libraries
#include <iostream> //I/0
#include <cstdlib>  ///srand and rand function
#include <ctime>    //Time to set the randome number seed
using namespace std;

// User Libraries

// Global Constants

// Function Prototypes
int pow(int,int);
// Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number
    srand(static_cast<unsigned int>(time(0)));
    //Declare and initialize variables
    const int GAMES=36000; //Max number of throws
    //Frequency of our dice throws
    unsigned short frq2=0,frq3=0,frq4=0,frq5=0,frq6=0;
    unsigned short frq7=0,frq8=0,frq9=0,frq10=0,frq11=0,frq12=0;
    unsigned short wins=0,losses=0;
    //Input Data 
    
    //Throw the dice
    for(int game=1;game<=GAMES;game++){
        char die1=rand()%6+1;//Number between 1,6
        char die2=rand()%6+1;//Number between 1,6
        char sum=die1+die2;
        if (sum==2 || sum==3||sum==12) losses++;
        else if (sum== 7||sum==11) wins++;
        else{
            //roll again
            bool kpRln=true;
            do{
                die1=rand()%6+1;//Number between 1,6
                die2=rand()%6+1;//Number between 1,6
                char sum2=die1+die2;
                if(sum==sum2){wins++;kpRln=false;}
                if(sum2==7){losses++;kpRln=false;}
            }while(kpRln);
        }
    }
  
    
    //Make outputs 
    cout<<"out of "<<GAMES<<" Games played"<<endl;
    cout<<"you won "<<wins<<" Games"<<endl;
    cout<<"you lost "<<losses<<" Games"<<endl;
    
return 0;    
}

