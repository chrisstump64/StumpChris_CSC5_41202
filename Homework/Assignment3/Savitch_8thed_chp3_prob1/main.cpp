/* 
 * Author: Christopher Stump
 * Created on January 19, 2016, 9:52 AM
 * Purpose: Rock, Paper, Scissors
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv){
    //The Problem to solve
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
    //Exit stage right
    return 0;
}

