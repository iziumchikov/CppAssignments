/*
* Class: CS 110A
* Description: Program computes and displays the charges 
* for a patient’s hospital stay.Asks if the patient was 
* admitted as an in-patient or an out-patient.Uses two
* overloaded functions for in and out patients to 
* calculate the total charges.
* Assignment #5
*/
#include <iostream>
#include <iomanip>
using namespace std;

//******************************
//Fuctions prototypes
//******************************
double calcTotal(int days, double rate,double medCharges,double others);
double calcTotal(double medCharges,double others);

//*******************************
//Calculates and returns charges 
//for in-patient.
//*******************************
double calcTotal(int days, double rate,double medCharges,double others) {

	return (days * rate) + medCharges + others;
}

//******************************
//Calculates and returns charges
//for out-patient.
//******************************
double calcTotal(double medCharges,double others) {

	return medCharges + others;
}

int main() {

	char choice;
	int days;
	double rate,
		   medCharges,
		   others;
	
	cout << "This program will compute patient hospital charges." << endl;
	cout << "What was the patient type?" << endl;
	
	cout << "In-patient or Out-patient? (I or O)";
	cin >> choice;
	
		//checks user choice
		while (choice != 'I' && choice != 'O' && choice != 'i' && choice != 'o') {
			cout << "Wrong choice. Please re-enter: ";
			cin >> choice;
			}
		
	//if choice equals in-patient,then asks user
	//to input some info.	
	if (choice == 'I' || choice == 'i') {
		//days
		cout << "Number of days in the hospital: ";
		cin >> days;
			//checks user input
			while (days < 0) {
				cout << "Number must be zero or more. Please re-enter: ";
				cin >> days;
				}
				
		//rate
		cout << "Daily room rate: $";
		cin >> rate;
			//checks user input
			while (rate < 0) {
				cout << "Number must be zero or more. Please re-enter: $";
				cin >> rate;
				}
				
		//medcharges
		cout << "Medication charges: $";
		cin >> medCharges;
			//checks user input
			while (medCharges < 0) {
				cout << "Number must be zero or more. Please re-enter: $";
				cin >> medCharges;
				}
				
		//others
		cout << "Lab fees and other service charges: $";
		cin >> others;
			//checks user input
			while(others < 0) {
				cout << "Number must be zero or more. Please re-enter: $";
				cin >> others;
			}
			
		//calls calcTotal() and function prints patient charges 
		cout << "Total charges are $ " << calcTotal(days,rate,medCharges,others) << endl;
		}
		
	else if (choice == 'O' || choice == 'o') {
		cout << "Medication charges: $" ;
		cin >> medCharges;
			//checks user input
			while (medCharges < 0) {
				cout << "Number must be zero or more. Please re-enter: $";
				cin >> medCharges;
				}
				
		cout << "Lab fees and other service charges: $" ;
		cin >> others;
			//checks user input
			while(others < 0) {
				cout << "Number must be zero or more. Please re-enter: $";
				cin >> others;
				}
		
		//calls calcTotal() and function prints patient charges 	
		cout << "Total charges are $" << calcTotal(medCharges,others) << endl;
		}
	return 0;
}