#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {
	
	int const months = 12;
	int years,
		inches,
		numMonth,
		totalInches;
		
	double average;
	
	cout << "This program will calculate average rainfall over a period of years." << endl;
	cout << "How many years do you wish to average? ";
	cin >> years;
	
	while (years < 1) {
		cout << "years most be greater then 1. Re-enter" << endl;
		cin >> years;
	}
	
	cout << endl;
	
	numMonth = months * years;
	
	for (int i = 1; i <= years; i++) {
	
		cout << "Year" << i << endl;
		cout << endl;
		
		for (int i = 1; i <= months; i++) {

			cout << "Number of inches of rain for month #  " << i << "? ";
			cin >> inches;
			
			while (inches < 0) {
				cout << "Can't be less then 0" << endl;
				cin >> inches;
			}
			totalInches += inches;
	    }
	}
    average = (double)(totalInches) / numMonth;
    
	cout << "Over a period of " << numMonth << ", " 
		 << totalInches << " inches of rain fell." << endl;
	cout << "Average monthly rainfall for the period is " 
		 << setprecision(3) << fixed << average << " inches." << endl;
	
	outFile.open("rainfall.txt");
    
	if(!outFile) {
		cout << "File cannot be open or doesn't exist" << endl;
	}
	
	outFile << "Over a period of " << numMonth << ", " 
			<< totalInches << " inches of rain fell." << endl;
	outFile <<"Average monthly rainfall for the period is " 
			<< setprecision(3) << fixed << average << " inches." << endl; 
	
	outFile.close();
	return 0;
}