/* 
 * Author: Christopher Stump
 * Created on January 20, 2016, 11:15 AM
 * Purpose: Table of Salary doubling starting with a penny
 *           Double is required because of number of significant numbers
 */

#include <iostream> //I/O
#include <iomanip>  //Formatting
using namespace std;

int main(int argc, char** argv){
    //The Problem to solve
    cout<<endl<<"Solution to Gaddis 8thed Chp5 Prob7"<<endl;
    cout<<endl<<"Display a salary table"<<endl;
    
    //Declare Variables 
    unsigned int salary=1;  //Salary staring at a penny
    double totpay=salary;           //Total pay buy summing the salary
    
    
    //Loop to generate the salary Table and Total paid
    cout<<" Day        $Salary         $Total"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<setw(4)<<1<<setw(15)<<salary/100.0f<<setw(15)<<totpay/100.0f<<endl;
    for(int day=2;day<=31;day++){
        salary*=2;
        totpay+=salary;
        cout<<setw(4)<<day<<setw(15)<<salary/100.0<<setw(15)<<totpay/100.0<<endl;
    }
    //Exit stage right
    return 0;
}

