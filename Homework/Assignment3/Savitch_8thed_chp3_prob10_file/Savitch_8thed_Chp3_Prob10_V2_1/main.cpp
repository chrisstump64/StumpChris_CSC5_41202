/* 
 * File:   main.cpp
 * Author: Chris Stump
 * Created on January 19, 2016, 9:30 AM
 * Purpose: fibonacci crud problem
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    //The problem to solve
    cout<<endl<<"Solution to Savitch 8thEd Chp3 Prob10"<<endl<<endl;
    cout<<endl<<"The Fibonacci Sequence"<<endl<<endl;
    
    //Declare variables
    unsigned int fi,fim1,fim2; // Designations in the sequence
    unsigned short nTerms;     // Number of termes in te sequence 
    unsigned short counter;
    unsigned int nDays;
    const char dRepro;
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
    return 0;
}

