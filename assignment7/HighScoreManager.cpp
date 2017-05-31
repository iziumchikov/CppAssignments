/*
* Class: CS 110A
* Description: Program manages a list of up to 10 
* players and their scores. Uses two arrays to 
* manage the list. One array for player name,
* second for player score. Contains methods
* to work with list.
* Assignment #7
*/
#include <iostream>
#include <iomanip>
using namespace std;

//prototypes list
void addPlayer(string names[], double scores[]);
void printPlayers(string names[], double scores[]);
void searchPlayers(string names[], double scores[],int size);
void removePlayer(string names[], double scores[]);

//index counter to save index of insert
int index = 0;

//***************************************
//addPlayer function saves name of player 
//to the names string array, and player 
//score to the scores double array.
//***************************************
void addPlayer(string names[], double scores[]){

	//asks and adds player name
	cout << "Enter new player name." << endl;
	cin >> names[index];
	
	
	//asks and adds player score
	cout << "Enter new player score." << endl;
	cin >> scores[index];
	
	//increase counter by one
	index += 1;
}

//****************************************
//printPlayers function print array of 
//names and array of scores
//****************************************
void printPlayers(string names[], double scores[]) {
	
	cout << "Player\t" << " Score" << endl;
	
	for (int i = 0; i < index;i++) 
	{
		cout << names[i]  << "\t  " << scores[i] << endl;
	}
}

//****************************************
//searchPlayers function looks for a 
//player name in names array and prints 
//score of player
//****************************************
void searchPlayers(string names[], double scores[],int size) {
	
	string name;
	bool found = false;
	
	cout << "What player to search for?" << endl;
	cin >> name;
	
	for(int i = 0; i < size;i++)
	{
	 if(names[i] != name)
	 {
	 	found = false;
	 }
	 else 
	 {
	 	found = true;
	 	cout << "The score for " << name << " is " << scores[i] << endl;
	 }
	}
	 
	if(found = false)
	{
	 cout << name << " not found" << endl;   
	}
}

//*****************************************
//removePlayer function deletes player from 
//both arrays 
//*****************************************
void removePlayer(string names[], double scores[],int size) {

	int nameIndex= 0; //to hold index of founded name
	string name;
	bool found = false;
	
	cout << "What player to remove?" << endl;
	cin >> name;
	
	//look for name in names array
	for(int i = 0; i < size;i++) 
	{
	   if(names[i] != name)
	    {
	 	    found = false; 
	    }
	    else
	    {
	    	found = true;
	    	nameIndex = i;//get index of founded name
	    }
	}
	
	if(found = false)
	{
	 	cout << name << " not found" << endl;   
	}
	else
	{
		//delete element from both arrays
		//by shifting elements of arrays
		for(int i = nameIndex; i < size-1;i++)
		{
	 		names[i] = names[i+1];
	 		scores[i] = scores[i+1];
		}
	}
	
	cout << "Player " << name << " removed." << endl;
	index--; //decrease counter by 1
}

int main() {
	
	const int size = 10;
	
	int choice;
	
	string namesAr[size];
	double scoresAr[size];
	
	do{
		cout << "Enter an option." << endl;
		cout << "1. Add new player and score." << endl;
		cout << "2. Print all players and scores." << endl;
		cout << "3. Search for a player's score." << endl;
		cout << "4. Remove a player. " << endl;
		cout << "5. Quit. " << endl;
		cin >> choice;
		
		while (choice < 0 || choice > 5) 
		{
			cout << "Re-enter choice" << endl;
			cin >> choice;
		}
		
		if (choice == 1)
		{
			addPlayer(namesAr,scoresAr);
		}
		
		else if (choice == 2)
		{
			printPlayers(namesAr,scoresAr);
		}
		
		else if (choice == 3)
		{
			searchPlayers(namesAr,scoresAr,size);
		}
		
		else if (choice == 4)
		{
			removePlayer(namesAr,scoresAr,size);
		}
		
	}while(choice != 5);
	
	
	return 0;
}



