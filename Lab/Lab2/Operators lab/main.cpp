/* 
    Author: Ryan DeLeon
    Created on January 11, 2016, 11:40 AM
    Purpose: Determine if pass or fail/ Overtime pay
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

// Function prototype

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
   int score;
   
    //Outputs
    cout<<"Ternary Operator"<<endl;   
    cout<<"Input score."<<endl;
    cin>>score;
    cout<<(score>=90?"A":(score>=80?"B":(score>=70?"C":(score>=60?"D":"F"))))<<endl;
    
    //Independent IF
    cout<<""<<endl;
    cout<<"Independent If"<<endl;
    cout<<"Input score."<<endl;
    if (score>=90)
        cout<<"A"<<endl;
    if (score>=80 && score<90)
        cout<<"B"<<endl;
    if (score>=70 && score<80)
        cout<<"C"<<endl;
    if (score>=60 && score<70)
        cout<<"D"<<endl;
    if (score<60)
        cout<<"F"<<endl;
    
    //Dependent IF
    cout<<""<<endl;
    cout<<"Dependent If"<<endl;
    cout<<"Input score."<<endl;
     if (score<60)
    cout << "F";
    else if (score< 70)
    cout << "D";
    else if (score< 80)
    cout << "C";
    else if (score< 90)
    cout << "B";
    else if (score<= 100)
    cout << "A";
    
    //Switch
    cout<<""<<endl;
    cout<<"Switch"<<endl;
    cout<<"Input score."<<endl;
    switch (score/10%10){
        case 0: cout<<"A"<<endl;
            break;
        case 9: cout<<"A"<<endl;
            break;
        case 8: cout<<"B"<<endl;
            break;
        case 7: cout<<"C"<<endl;
            break;
        case 6: cout<<"D"<<endl;
            break;
        default: cout<<"F"<<endl;
    }
    return 0;
   
}

