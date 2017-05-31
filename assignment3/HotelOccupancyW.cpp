/*
* Class: CS 110A
* Description: Program asks user to enter info about hotel
* and displays total and average info. And write result info
* to the file.
* Assignment #3
*/
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {
	
	//list of variables
	int input = 0,
		numFloors = 0,
		numRooms = 0,
		numOccupied = 0;
		
	double percent;
	
	//asks user
	cout << "How many floors does the hotel have? ";
	cin >> numFloors;
	cout << endl;
	
	//for loop for number of floors
	//in hotel
	for (int i = 1; i <= numFloors; i++) {
		
		//check 13 floor, if so
		//omit it
		if (i == 13) {
			i++;
		}
		
		//asks user
		cout << "How many rooms does floor " << i << " have? ";
		cin >> input;
		
		//input validation
		while (input < 10) {	
		    cout << "Invalid. Enter 10 or more: ";
		    cin >> input;
		}
		
		//increase total number of rooms
		numRooms += input;
		
		//asks user
		cout << "How many occupied rooms does floor " << i << " have? ";
		cin >> input;
		cout << endl;
		
		//increase total number of occupaed rooms
		numOccupied += input;
	}
	
	//calculate percent
    percent = (double)(numOccupied) / numRooms * 100;
    
    //print result
	cout << "Number of rooms: " << numRooms << endl;
	cout << "Occupied rooms: " << numOccupied << endl;
	cout << "Vacant rooms: " << numRooms - numOccupied << endl;
	cout << "Occupancy rate: " << setprecision(1) << fixed << percent << "%" << endl;
	
	//open file Hotel.txt    
    outFile.open("Hotel.txt");
    
    //check if file exist or not
	if(!outFile) {
		cout << "File cannot be open or doesn't exist" << endl;
	}
	
	//write info result info to the file
	outFile << "Number of rooms: " << numRooms << endl;
	outFile << "Occupied rooms: " << numOccupied << endl;
	outFile << "Vacant rooms: " << numRooms - numOccupied << endl;
	outFile << "Occupancy rate: " << setprecision(1) << fixed << percent << "%" << endl;  
	
	//close file
	outFile.close();
	return 0;
}
