/*
* Class: CS 110A
* Description: Mobile Provider calculates a customer’s monthly bill. 
* Program asks which package the customer has purchased and 
* how many minutes were used. After displays the total amount due.
* Lab 6
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	//list of variables
	const double packageA = 39.99,
				 packageB = 59.99,
				 packageC = 69.99;
	char choice;
	double minutes, total;
	
	do{
		//Program menu
		cout << endl;
		cout << "Select a subscription package:" << endl;
		cout <<	"1. Package A" << endl;	 
		cout << "2. Package B" << endl;
		cout << "3. Package C" << endl;
		cout << "4. Quit" << endl;
		cin >> choice;
	
	//input validation be sure the user only 
	//selects package A, B, or C.
	if(choice != '1' && choice != '2' && choice != '3')
	{
		cout << "Wrong choice!";
		cout << "Try again";
	}
	
	//If user choice was Package A
	if(choice == '1')
	{
		//Ask minutes
		cout << "How many minutes were used? ";
		cin >> minutes;
			//If used minutes greater then monthly
			//provided counts total bill.
			if(minutes > 450)
			{
				total = packageA +(minutes - 450) * 0.45;
				cout << "The total amount due is $" << total << endl;
			}
			
			else
			{
				cout << "The total amount due is $" << packageA << endl;
			}
	}
	
	//Else if user choice was Package B
	else if (choice == '2')
	{
		//Ask minutes
		cout << "How many minutes were used? ";
		cin >> minutes;
		
			//If used minutes greater then monthly
			//provided counts total bill.
			if(minutes > 900)
			{
				total = packageB + (minutes - 900) * 0.45;
				cout << "The total amount due is $" << total << endl;
			}
			
			else
			{
				cout << "The total amount due is $" << packageB << endl;
			}
	}

	//else if user choice was Package B 
	else if (choice == '3')
	{
		//Prints bill amount
		cout << "How many minutes were used? ";
		cin >> minutes;
		cout << "The total amount due is $" << packageC << endl;
	}
	}while(choice != 4); // end of do-while loop
	
	return 0;
}