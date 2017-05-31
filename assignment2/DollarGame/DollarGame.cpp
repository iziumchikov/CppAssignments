/*
* Class: CS 110A
* Description: change-counting game that gets the user 
* to enter the number of coins required to make exactly
*  one dollar.
* Assignment #2
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	//list of variables
	int pennies, nickels, dimes, quarters, coinsNum;
	
	//intro
	cout << "Let's play a change-counting game." << endl;
	cout << "Enter the number of coins needed to "
		 << "make exactly one dollar." << endl;
	
	//asks user to enter number of pennies, 
	//nickels, dimes, and quarters.
	cout << "Enter the number of pennies:" ;
	cin >> pennies;
	cout << "Enter the number of nickels:" ;
	cin >> nickels;
	cout << "Enter the number of dimes:" ;
	cin >> dimes;
	cout << "Enter the number of quarters:" ;
	cin >> quarters;
	cout << endl;
	
	//calculates total number of coins
	coinsNum = pennies + (nickels * 5 + dimes * 10 + quarters * 25);
	
	//if-else statement to check if total number
	//of coins equals 100.
	if (coinsNum != 100)
	{
		cout << "Sorry, that's more than one dollar." << endl;
	}//end if
	
	else 
	{
		cout << "Congratulations! You win!" << endl;
	}//end else
	
	return 0;
}