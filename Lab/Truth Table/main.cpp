/* 
    Author: Christopher Dean Stump
    Created on January 11, 2016, 9:00 AM
    Purpose: Display table and compare swaps
 */

// System Libraries
#include <iostream>
using namespace std;

// User Libraries

// Global Constants

// Function Prototypes

// Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    bool x=true;
    bool y=true;
    int a= 2,b=3;
    //Create Heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y (X^Y)^Y (X^Y)^X !(X&&Y) !X||!Y !(X||Y) !X&&!Y"<<endl;
    
    //First Row
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"    ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   "; 
    cout<<(x^y?'T':'F')<<"       "; 
    cout<<((x^y)^y?'T':'F')<<"       "; 
    cout<<((x^y)^x?'T':'F')<<"       "; 
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"       "; 
    cout<<(!(x||y)?'T':'F')<<"      "; 
    cout<<(!x&&!y?'T':'F')<<"  "<<endl; 
    
    //Second Row
    x=true,y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"    ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   "; 
    cout<<(x^y?'T':'F')<<"       "; 
    cout<<((x^y)^y?'T':'F')<<"       "; 
    cout<<((x^y)^x?'T':'F')<<"       "; 
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"       "; 
    cout<<(!(x||y)?'T':'F')<<"      "; 
    cout<<(!x&&!y?'T':'F')<<"  "<<endl; 
    
    //Third Row
    x=false,y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"    ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   "; 
    cout<<(x^y?'T':'F')<<"       "; 
    cout<<((x^y)^y?'T':'F')<<"       "; 
    cout<<((x^y)^x?'T':'F')<<"       "; 
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"       "; 
    cout<<(!(x||y)?'T':'F')<<"      "; 
    cout<<(!x&&!y?'T':'F')<<"  "<<endl;
    
    //Fourth Row
    x=false,y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"    ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   "; 
    cout<<(x^y?'T':'F')<<"       "; 
    cout<<((x^y)^y?'T':'F')<<"       "; 
    cout<<((x^y)^x?'T':'F')<<"       "; 
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"       "; 
    cout<<(!(x||y)?'T':'F')<<"      "; 
    cout<<(!x&&!y?'T':'F')<<"  "<<endl;
    
    //Swap using temp
    cout<<"Before Swap using temp "<<"a = "<<a<<" b = "<<b<<endl;
    char temp = a;
    a = b;
    b = temp;
    cout<<"After Swap using temp "<<"a = "<<a<<" b = "<<b<<endl;
    
    //Swap using exclusive or operator
    a=2, b=3;
    cout<<"Before Swap using exclusive or operator "<<"a = "<<a<<" b = "<<b<<endl;
    a=a^b;
    b=a^b;
    a=a^b;     
    cout<<"After Swap using exclusive or operator "<<"a = "<<a<<" b = "<<b<<endl;
    //Exit stage right
    
    return 0;
}

