/*
* Class: CS 110A
* Description: This program asks user to answer questions. After
* that displays story, based on the answers.
* Lab 3
*/
#include <iostream>
#include <string>
using namespace std;

	int main(){
	
		//list of variables
		int age,kids;
		string name, city,activity,animal,product,petName;

		//Program asks questions
		cout << " Your name: ";
		getline(cin, name);
		
		cout << " The name of a city: ";
		getline(cin, city);
		
		cout << " A physical activity (e.g. jogging, playing baseball): ";
		getline(cin, activity);
		
		cout << " An animal: ";
		getline(cin, animal);
		
		cout << " A food or product you can buy: ";
		getline(cin, product);
		
		cout << " An adjective noun (e.g. blue car): ";
		getline(cin, petName);
			
		cout << " A number between 10 and 50: ";
		cin >> age;
		
		cout << " A number between 0 and 15: ";
		cin >> kids;
		
		//Program displays a story based on answers
		cout << " There once was a person named " << name 
		 	 << " who lived in " << city
		 	 << " and who loved " << activity << "." << endl;
		cout << " At the age of " << age << ", " << name 
		 	 << " graduated from high school and went to work in a "
		 	 << product << " \n factory. ";
		cout << name << " got married and had " << kids
		  	 << " and a pet " << animal << " named " << petName << ".";
		cout << " Every weekend the\n family and "<< petName
			 << " had fun " << activity << " together." << endl;
	
		return 0;
	}