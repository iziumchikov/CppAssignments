#include <iostream>
#include <iomanip>
using namespace std;

int getEmployees();
int getDaysOut(int num);
double calcAverage(int employees,int daysOut);

int getEmployees(){

	int num;
	cout << "How many employees are there in the company? ";
	cin >> num;
	
	while (num < 1){
		cout << "Re-enter";
		cin >> num;
		}
		
	return num;
	}
	
int getDaysOut(int numEmployees) {
	
	int num, count;
	for (int i = 1; i <= numEmployees; i++) 
	{
		cout << "How many days did employee " << i << " miss? " ;
		cin >> num;
		
			while (num < 0) {
				cout << "Re-enter";
				cin >> num;
			}
		
		count += num;
	}
	return count;
}

double calcAverage(int employees, int daysOut) {

	double average;
	
	average = ((double)(daysOut))/employees;
	
	return average;
	
	}
	
int main() {

	int numEmployees = getEmployees();
	int daysOut = getDaysOut(numEmployees);
	
	cout << "The average number of days missed was " << setprecision(0) 
		 << fixed << calcAverage(numEmployees,daysOut) << "." << endl;
	
}
	
	
	