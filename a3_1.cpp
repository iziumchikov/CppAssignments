/*
* Class: CS 110B 
* Description: Program plays a number guessing game with a user. 
* The user will think of a number between 1 and 100. The program will 
* make guesses and the user will tell the program to guess higher or lower.
*/

#include <iostream>
#include <cstdlib> // needed to use srand and rand
#include <ctime> // needed to use time

//prototypes list
void playOneGame();
void getUserResponseToGuess(int guess, char& result);
int getMidpoint(int low, int high);

//to hold a range
const int MIN_NUM = 1,
		  MAX_NUM  = 100;

using namespace std;

/*
* Function playOneGame() asks user to think one number,
* then uses helper function to get middle point in numbers
* range and uses helper function to get answer from user.
*/
void playOneGame() {

	int low = MIN_NUM; 
	int high = MAX_NUM;
	int guess;
	char result;
	
	cout << "Think of a number between " << MIN_NUM << "and " 
			<< MAX_NUM << "." << endl;
	
	//get a middle point of the range
	guess = getMidpoint(low, high);
	
	//get user tip
	getUserResponseToGuess(guess, result);
	
		//making decision
		while (result != 'c') 
		{
			if (result == 'l') {
				high = guess - 1;
			}
			else {
				low = guess + 1;
			}
	
			guess = getMidpoint(low, high);
			getUserResponseToGuess(guess, result);
		}
	}


/*
* Function getUserResponseToGuess asks user to enter
* a guess tip, and sets result parameter,based on 
* user answer.
*/
void getUserResponseToGuess(int guess, char& result) {

	cout << "Is it " << guess << " (h/l/c)?";
	cin >> result;

	}

/*
* Function getMidpoint returns the middle point of
* two accepted integers.
*/
int getMidpoint(int low, int high) {

	return (low + high)/ 2;
}

/*
* Main function
*/
int main() {
    char response;
    
    cout << "Ready to play (y/n)? ";
    cin >> response;
    
    while (response == 'y') 
    {
        playOneGame();
        cout << "Great! Do you want to play again (y/n)? ";
        cin >> response;
    }
    
    return 0;
}