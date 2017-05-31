/*
* Class: CS 110A
* Description: Program asks user to input number of sells for 
* each chair. After calculates total dollar sales of each style 
* and total sales for all chairs.
* Lab 3
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	//list of constants and variables
	const float americanColonial = 85.00;
	const float modern = 57.50;
	const float frenchClassic = 127.75;
	
	float total;
	int sold1, sold2, sold3;
	
	
	//Output and input statements
	cout << "Please input the number of American Colonial chairs sold " << endl;
	cin >> sold1;
	
	cout << "Please input the number of Modern chairs sold " << endl;
	cin >> sold2;

	cout << "Please input the number of French Classical chairs sold" << endl;
	cin >> sold3;
	
	//calculate total of all sales
	total = (americanColonial * sold1) + (modern * sold2) + (frenchClassic * sold3);
	
	//cout statement in fixed point notation with two decimal points
	cout << showpoint << fixed << setprecision(2)
	     << "The total sales of American Colonial chairs $" << americanColonial * sold1 << endl
	     << "The total sales of Modern chairs $" << modern * sold2<< endl
	     << "The total sales of French Classical chairs $" << frenchClassic * sold3<< endl  
	     << "The total sales of all chairs $" << total << endl;

	return 0;
}