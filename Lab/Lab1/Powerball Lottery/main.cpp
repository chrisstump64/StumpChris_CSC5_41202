/*  Name: Christopher Dean Stump
	Date: 1/11/16 10:45 AM
	Purpose: Find the real value of the powerball lottery
*/
 
#include <iostream>
using namespace std;
 
int main() {
//Declare and initialize variables
	int lumpsum, afttax; //The lumpsum penalty, the tax penalty
	int mrrig, jckpot;   //The marriage penalty, the jackpot
//Take in inputs
	cout<<"How much is the jackpot for the lottery?"<<endl;
	cin >>jckpot;
//Make calculations
	lumpsum=jckpot*0.62;
	afttax =lumpsum*0.52;
	mrrig  =afttax*0.5;
//Output results
	cout<<"The Jackpot is worth $"<<jckpot<<endl;
	cout<<"The money you get as a lumpsum is $"<<lumpsum<<endl;
	cout<<"You lost  $"<<jckpot-lumpsum<<endl;
	cout<<"The money you get after taxes is $"<<afttax<<endl;
	cout<<"You lost  $"<<lumpsum-afttax<<endl;
	cout<<"The money you get after your spouse takes half away is $"<<mrrig<<endl;
	cout<<"You lost  $"<<afttax-mrrig<<endl; 
	return 0;
}