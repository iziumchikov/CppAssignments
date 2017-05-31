/*
* Class: CS 110B 
* Description: Programm asks user to input any date
* with mm/dd/yy pattern and checks is input date is 
* magic or not.
* File Name: a1_1.cpp
*/


#include <iostream>

using namespace std;

int main() {
	
	//list of variables
	int days,
		month
		year;
	
	//get month input
	cout << "Enter month ";
	cin >> month;
	
	//get day input
	cout << "Enter day ";
	cin >> days;
	
	//get year input
	cout << "Enter a year ";
	cin >> year;
	
	//checks if date is magic or not
	//and prints result
	if (month * days == year) {
		cout << "The date is magic!" << endl;
	}
	
	else {
		cout << "The date is not magic!" << endl;
	} 
	
	return 0;
}