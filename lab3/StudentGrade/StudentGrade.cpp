/*
* Class: CS 110A
* Description: This program asks student to enter name, email,
* and 3 grades. After, counts average of grades and prints result.
* Due Date: 02/05/2016
* Lab 3
*/
#include <iostream>
#include <string>   //need to use string
#include <iomanip>  //need to use setprecision
using namespace std;

int main(){

	//list of variables
	double grade1, grade2, grade3, average;
	string name, email;
	
	//enter name
	//using getline, cause name could be one word or more
	cout << " Please input the student name: ";
	getline(cin, name);
	
	//enter email
	cout << " Enter your email address: ";
	cin >> email;
	
	//block for grades input
	cout << " Please input the first student grade: ";
	cin >> grade1;
	
	cout << " Please input the second student grade: ";
	cin >> grade2;
	
	cout << " Please input the first student grade: ";
	cin >> grade3;
	
	//calculates average
	average = (grade1 + grade2 + grade3)/3;
	
	//prints results
	cout << " Student name: " << name << endl;
	cout << " Student email address: " << name << endl;
	//using setprecision to print only 2 digits after decimal point
	cout << " The average of the three grades is " << setprecision(4) << average << endl;
	
	return 0;
}