/*
* Class: CS 110A
* Description: Program charges fees to accounts, based
* on balance and number of checks.
* Assignment #2
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	//list of constants and variables
	const int CHECK_FEE = 10;
	const int EXTRA_FEE = 15;
	
	double balance, monthFee;
	int quantity;
	
	//Asks user to enter balance and number of checks
	cout << "Enter the following information "
		 << "about your checking account." << endl 
		 << "Beginning balance: $" ;
	cin >> balance;
	cout << "Number of checks written: " ;
	cin >> quantity;
	
	//Checks if balance less or equals 0
	if (balance <= 0)
    {  
      	cout << "Your balance can't be less or equals 0.\n";
    }//end if
    
    //Checks if balance less the 400.
    //If so, then assigns variable 'monthFee'
    //to be equal EXTRA_FEE plus CHECK_FEE.
	else if (balance < 400)
	{
		monthFee = EXTRA_FEE + CHECK_FEE;
	}
	
	//monthFee equals to CHECK_FEE if
	//any of previous statements are
	//not true
	else
	{
		monthFee = CHECK_FEE;
	}
	
	
	//Checks if quantity less or equals 0
	if (quantity <= 0)
	{
		cout << "Number of checks must be greater then 0" << endl;
	}
	
	//adds checks fee to the month payment 
	//based on number of checks
    else if (quantity < 20)
	{
		monthFee += 0.10 * quantity;
	}
	
	//adds checks fee to the month payment 
	//based on number of checks
	else if (quantity >= 20 && quantity <= 39)
	{
		monthFee += 0.08 * quantity;
	}
	
	//adds checks fee to the month payment 
	//based on number of checks
	else if (quantity >= 40 && quantity <= 59)
	{
		monthFee += 0.06 * quantity;
	}
	
	//adds checks fee to the month payment 
	//based on number of checks
	else if (quantity >= 60)
	{
		monthFee += 0.04 * quantity;
	}
	
	cout << endl;
	cout << "The bank fee this month is: $" 
	     << showpoint << fixed << setprecision(2)
	     << monthFee << endl;
	
	return 0;
}