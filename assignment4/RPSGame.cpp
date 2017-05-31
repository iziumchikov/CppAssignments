#include <iostream>
#include <iomanip>
#include <cstdlib> // needed to use srand and rand
#include <ctime> // needed to use time
using namespace std;

//Function prototypes
int getComputerChoice();
int getUserChoice();
string displayChoice(int x);
void determineWinner(int userIn, int compIn);

//****************************************
//Function getComuterChoice() generates
//a random number in range from 1 to 3
//and returns it value.
//****************************************
int getComputerChoice() {
	
	const int MIN_NUM = 1,
			  MAX_NUM = 3;
			  
	int compChoice;
	
	srand(time(NULL));
	compChoice = rand() % MAX_NUM + MIN_NUM;
	
	return compChoice;
}

//****************************************
//Function getUserChoice() asks user to
//make a choice, validates users input
//and returns it value.
//****************************************
int getUserChoice(){

	int userChoice;
	
	cout << "Enter your choice: ";
	cin >> userChoice;
	
	while (userChoice <= 0 || userChoice > 4)
	{
		cout << "Invalid selection. Enter 1, 2, 3, or 4: " ;
		cin >> userChoice;
	}
	
	if(userChoice == 4) 
	{
	    exit(0);
	}
	
	return userChoice;
}

//****************************************
//Function displayChoice(int x) receives
//int value and returns string with choice 
//name according to received value.
//****************************************
string displayChoice(int x) {

	if(x == 1) {
		return "Rock"; 
		}
	else if (x == 2) {
		return "Paper";
		}
	else {
		return "Scissors";
		}
}

//****************************************
//Function determineWinner(int userIn,
//								int compIn)
//receives user and computer choice, 
//decides who win and prints result.
//****************************************
void determineWinner(int userIn, int compIn) {

	//if both choices are equal
	//then tie.
	if(userIn == compIn) 
	{
		cout << "Tie.No winner." << endl << endl;
	}
	
	else
	{
		//Part if user choice is Rock
		if (userIn == 1 && compIn == 2) {
			cout << "Computer wins! Paper wraps rock." << endl << endl;
			}
		else if(userIn == 1 && compIn == 3) {
			cout << "You win! Rock smashes scissors." << endl << endl;
			}
		
		//Part if user choice is Paper
		if (userIn == 2 && compIn == 1) {
			cout  << "You win! Paper wraps rock." << endl << endl;
			}
		else if(userIn == 2 && compIn == 3) {
			cout << "Computer wins!Scissors cuts paper." << endl << endl;
			}
		
		//Part if user choice are Scissors
		if (userIn == 3 && compIn == 1) {
			cout << "Computer wins!Rock smashes scissors." << endl << endl;
			}
		
		else if (userIn == 3 && compIn == 2) {
			cout << "You win! Scissors cuts paper." << endl << endl;
			}
	}
}

//****************************************
//Function menu() represents program
//menu
//****************************************
void menu() {
	
	int user,comp;
	    
	do{
	    comp = getComputerChoice();//call function to get comp choice
	    
	    cout << "Let's play Rock, Paper, Scissors!" << endl;
	    cout << "	GAME MENU	" << endl;
	    cout << " 1) Rock " << endl;
	    cout << " 2) Paper " << endl;
    	cout << " 3) Scissors " << endl;
	    cout << " 4) Quit " << endl;
	    user = getUserChoice(); //call function to get user choice
	    
	    //display both choices using function displayChoice
	    cout << "You selected: " << displayChoice(user) << endl;
	    cout << "Computer selected: " << displayChoice(comp) << endl;
	    
    	determineWinner(user,comp);//find winner
    	
	}while (user != 4);
}

int main(){
    
	menu();	//call menu()
	
	return 0;
}