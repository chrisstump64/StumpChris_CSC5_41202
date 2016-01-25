/* 
    Author: Christopher Dean Stump
    Created on January 25, 2016, 8:36 AM
    Purpose: Power function
 */

// System Libraries
#include <iostream> //I/0
#include <cstdlib>  ///srand and rand function
#include <ctime>    //Time to set the randome number seed
#include <fstream>  //File I/0
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
    const int games; //Max number of throws
    unsigned short wins=0,losses=0;
    //Open File 
    out.open("CardGame.dat");
    //Input Data 
    cout<<""        
    cin>>games;
    //Throw the dice
    for(int game=1;game<=games;game++){
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
                switch (sum2==7){
                    case true:{losses++;kpRln=false;};
                    default:
                        if(sum==sum2){wins++;kpRln=false;}
                }
               
            }while(kpRln);
        }
    }
  
    
    //Make outputs 
    cout<<"out of "<<GAMES<<" Games played"<<endl;
    cout<<"you won "<<wins<<" Games"<<endl;
    cout<<"you lost "<<losses<<" Games"<<endl;
    
return 0;    
}

