/* 
    Author: Christopher Dean Stump
    Created on January 19, 2016, 8:30 AM
    Purpose: Make a menu with 10 problems
 */

// System Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;
// User Libraries

// Global Constants

// Function Prototypes
void problem1();
// Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short nSoltn; //Problem solution to display
    bool reDsply=true;
    // menu to display solution
    do {
    //Input Problem to display 
    cout<<"Assignments 3 Problem Set"<<endl;
    cout<<"Type 1 to display Savitch 8thEd Chp3 Prob10"<<endl;
    cout<<"Type 2 to display Savitch 8thEd Chp3 Prob11"<<endl;
    cout<<"Type 3 to display Savitch 7thed Chp3 Prob1"<<endl;
    cout<<"Type 4 to display Savitch 9thed Chp3 Prob3"<<endl;
    cout<<"Type 5 to display "<<endl;
    cout<<"Type 6 to display "<<endl;
    cout<<"Type 7 to display "<<endl;
    cout<<"Type 8 to display "<<endl;
    cout<<"Type 9 to display "<<endl;
    cout<<"Type 10 to display "<<endl<<endl;
    cin >>nSoltn;
    
        //Solutions to all the problems 
        switch(nSoltn){
            case 1: {problem1();break;}
            case 2:{
               //Declare and initialize variables
                const unsigned char nTerms=13;
                float etox=1,x;

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
                    etox=pow(x,n)/factN;
                }
                //Output the results
                cout<<"The exact value of e^x"<<x<<"="<<exp(x)<<endl;
                cout<<"The approx value of e^x"<<x<<"="<<etox<<endl<<endl;

                break;
            }
            case 3:{
                cout<<endl<<"Solution to Savitch 7thed Chp3 Prob1"<<endl;
                cout<<endl<<"The Rock paper scissors game"<<endl;

                //Set the random number seed and declare the question
                srand(static_cast<unsigned int>(time(0)));
                char qwstion;   //Question, does player want to keep playing

                //Loop until player wants to Quit
                do{

                    //Declare and initialize variables
                    char computr;   //The computers play
                    char player;    //The players move


                    //Input the players turn
                    do{
                        cout<<endl<<"What is your move P,R,S?"<<endl;
                        cin >>player;
                        player=toupper(player);
                    }while(!(player=='P'||player=='R'||player=='S'));

                    //Computer generated play
                    do{
                            computr=rand()%4+80;
                    }while(computr=='Q');

                    //Output the moves by the computer and player
                    cout<<"The computer played  "<<computr<<endl;
                    cout<<"The Player   played  "<<player<<endl;

                    //Determine the result
                    if(computr==player){
                        cout<<"The result is a tie"<<endl;
                    }else if(player=='P'&&computr=='R'){
                        cout<<"The player wins!"<<endl;
                    }else if(player=='R'&&computr=='S'){
                        cout<<"The player wins!"<<endl;
                    }else if(player=='S'&&computr=='P'){
                        cout<<"The player wins!"<<endl;
                    }else{
                        cout<<"The player loses"<<endl;
                    };

                    //Keep playing
                    cout<<endl<<"Do you want to keep playing?"<<endl;
                    cin >>qwstion;
                }while(toupper(qwstion)=='Y');
                break;
            }
            case 4:{
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
                break;
            }
            case 5:{
                cout<<"Problem 5"<<endl;
                break;
            }
            case 6:{
                cout<<"Problem 6"<<endl;
                break;
            }
            case 7:{
                cout<<"Problem 7"<<endl;
                break;
            }
            case 8:{
                cout<<"Problem 8"<<endl;
                break;
            }
            case 9:{
                cout<<"Problem 9"<<endl;
                break;
            }
            case 10:{
                cout<<"Problem 10"<<endl;
                break;
            }
            
            
            default:{
                cout<<"Exiting the program"<<endl;
                reDsply=false;
            }
        
        }
    }while(reDsply);
    
    return 0;
}
/****************************************************************************************************************/
/***************************************************Probelm 1****************************************************/
/****************************************************************************************************************/
void problem1 (){
                cout<<endl<<"Solution to Savitch 8thEd Chp3 Prob10"<<endl<<endl;
                cout<<endl<<"The Fibonacci Sequence"<<endl<<endl;

                //Declare variables
                unsigned int fi,fim1,fim2; // Designations in the sequence
                unsigned short nTerms;     // Number of termes in te sequence 
                unsigned short counter;
                unsigned int nDays;
                const char dRepro=5;
                float crudWt;
                //Initialize the sequence
                counter=2;
                fim2=fim1=1;

                //Input the number of turns in the sequence
                cout<<"Input the initial weight of the crud in lbs"<<endl;
                cin>>crudWt;
                cout<<"How may days will the crud be allowed to grow"<<endl;
                cin>>nDays;

                //Calculate the number of terms
                nTerms=nDays/dRepro+1;

                //output or calculate output required 
                if(nTerms==1){
                    cout<<endl<<"Term "<<nTerms<<" in the sequence = ";
                    cout<<fim2<<endl;
                }else if(nTerms==2){
                    cout<<endl<<"Term"<<nTerms<<" in the sequence = ";
                    cout<<fim2<<endl;
                }else{
                    do{
                        fi=fim1+fim2;
                        counter++;
                    }while(counter<nTerms);

                    cout<<"Term"<<nTerms<<" in the sequence = ";
                    cout<<fim2<<endl;
                    }
                cout<<"After "<<nDays<<" days the crud weighs "<<fi*crudWt<<"(lbs)"<<endl<<endl;
}