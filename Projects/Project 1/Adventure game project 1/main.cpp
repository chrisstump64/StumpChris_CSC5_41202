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
#include <fstream>
using namespace std;
// User Libraries

// Global Constants

// Function Prototypes

// Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short plyrdmg, plyrhlt, plyrgld=0; //Problem solution to display
    bool game=true,reDsply=true;
    unsigned short choice, descrip;
    
    //Description of each class and where the player chooses
    cout<<"You are about to begin your quest "<<endl;
    cout<<"First you must choose the character you will play as on your journey"<<endl;
    
    //Providing the descriptions of each class
    do{
        cout<<"Press 1 to read the description of the knight"<<endl;
        cout<<"Press 2 to read the description of the wizard"<<endl;
        cout<<"Press 3 to read the description of the archer"<<endl;
        cout<<"Press any other number when you are ready to make your decision"<<endl<<endl;
        cin >>descrip;
        switch(descrip){
            case 1:{            
                cout<<endl<<"The knight is a durable character with low damage"<<endl;
                cout<<"He begins with 50 health and 15 damage"<<endl<<endl; break;
            } 
            case 2:{
                cout<<endl<<"The wizard is a fragile character with high damage"<<endl;
                cout<<"He begins with 25 health and does 40 damage"<<endl<<endl; break;
            } 
            case 3:{
                cout<<endl<<"The archer is a average character with average damage"<<endl;
                cout<<"He begins with 35 health and does 30 damage"<<endl<<endl; break;
            } 
            default:{
                reDsply=false;
            }
}
    }while(reDsply==true);
    //Setting the Redisplay to true so the next loop repeats
    reDsply=true;
    //Do loop to Select
    do{
        cout<<endl<<"Press 1 to choose the knight"<<endl;
        cout<<"Press 2 to choose the wizard"<<endl;
        cout<<"Press 3 to choose the archer"<<endl;
        cin >>choice;
        switch(choice){
            case 1:{            
                cout<<endl<<"You have selected the knight"<<endl;
                plyrdmg=15; plyrhlt=50; 
                reDsply=false; break;
            } 
            case 2:{
                cout<<endl<<"You have selected the wizard"<<endl; 
                plyrdmg=40; plyrhlt=25; 
                reDsply=false; break;
            } 
            case 3:{
                cout<<endl<<"You have selected the archer"<<endl<<endl; 
                plyrdmg=35, plyrhlt=35; 
                reDsply=false; break;
            }            
}
 }while(reDsply==true);
    cout<<plyrdmg<<"  "<<plyrhlt<<endl;
    return 0;
}

