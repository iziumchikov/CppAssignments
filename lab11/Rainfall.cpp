/*
* Class: CS 110A
* Description: Compares student answers list with 
* correct answers list and prints result.
* Assignment #6
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    const int yearLength = 12;
	const string namesMonth[] = { "January", "February","March","April","May",
								  "June", "July","August","September","October",
								  "November","December" };
	
	double total, 
		   average,
		   leastMonth,
		   mostMonth;
	
	double monthTotal[yearLength];
	
	string lowestMonth,
		   highestMonth;
	
	for(int i = 0; i < yearLength; i++) {
	
		cout << "Enter rainfall for " << namesMonth[i] << " :" ;
		cin >> monthTotal[i];
		
		while (monthTotal[i] < 0) {
			cout << "invalid data(negative rainfall) -- retry" << endl;
			cin >> monthTotal[i];
		}	
	}
	
	//***************
	//TOTAL
	//***************
	
	for (int i = 0; i < yearLength; i++) {
		total += monthTotal[i];
	}
	
	//***************
	//AVERAGE
	//***************
	average = total / yearLength;
	
	//***************
	//Least, Most
	//***************
	
	for (int i = 0; i < yearLength; i++) {
		
		leastMonth = monthTotal[0];
		mostMonth = monthTotal[0];
		
		if (monthTotal[i] < leastMonth) {
			
			leastMonth = monthTotal[i];
			lowestMonth = namesMonth[i-1];
			
		}
		
		if (monthTotal[i] > mostMonth) {
			
			mostMonth = monthTotal[i];
			highestMonth = namesMonth[i];
		}
	}
	
	//****************
	//OUTPUT
	//***************
	cout << "Total rainfall: " << total << endl;
	cout << "Average rainfall: " << average << endl;
	cout << "Least rainfall in: " << lowestMonth << endl;
	cout << "Most rainfall in: " << highestMonth << endl;
	
	return 0;
}
