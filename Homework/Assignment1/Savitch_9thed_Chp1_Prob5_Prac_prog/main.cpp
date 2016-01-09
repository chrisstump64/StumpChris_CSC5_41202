/* 
    Author: Christopher Dean Stump
    Created on January 5, 2016, 9:30 AM
    Purpose: Calculate the area of a fence
 */

    // System Libraries
    #include <iostream>
    using namespace std;

    // User Libraries

    //Global Constants

    // Function Prototypes

    // Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    int height;    // The height of the fence
    int width;     // The width of the fence
    int area;     // The area of the fence
    
    //Calculate or map inputs to outputs
    cout << "Press return after entering a number.\n";
    cout << "Enter only the number for the height of the fence in feet:\n";
    cin  >> height;            // The users input on the height of the fence
    cout << "Enter only the number for the width of the fence in feet :\n";
    cin  >> width;            // The users input on the width of the fence
    area = height* width; // The equation to calculate the area of the fence
    
    //Output the results
    cout << "If your fence is ";
    cout << height;
    cout << " feet tall\n";
    cout << "and ";
    cout << width;
    cout << " feet wide, then\n";
    cout << "Its area is ";
    cout << area;
    cout << " feet^2.\n";
    //Exit stage right
    return 0;
}

