/*
* Class: CS 110A
* Description: Program generates a random number and asks 
* the user to guess what the number is.Program use a do-while 
* that repeats until the user correctly guesses the random number.
* If user correctly guesses the random number, the program 
* displays the total number of guesses.
* Lab 7
*/

#include <iostream>
#include <cstdlib> // needed to use srand and rand
#include <ctime> // needed to use time

using namespace std;

int main() {

	//list of variables
	const int MIN_NUM = 1,
			  MAX_NUM  = 10;
			  
	int userIn, 
	    numGuesses, 
	    random;
	
	//generates random number in
	//assigned by constants
    srand(time(NULL));
	random = rand() % MAX_NUM + MIN_NUM;

	cout << "I'm thinking of a number\n"
		 << "Can you guess what it is?" << endl;

	
	do {
		cin >> userIn;
		numGuesses++; //number or users tries +1
	
		//to check if user input in range
	    if (userIn < MIN_NUM || userIn > MAX_NUM) 
		{
			cout << "Your guess must be in the range " << MIN_NUM 
											<< " to " << MAX_NUM << endl;
			cout << "Try again" << endl; 
			numGuesses--;
		}
		
		//to check if user input not equal to random
		else if (userIn != random) 
		{
			if (userIn < random) 
			{
				cout << "No, that's too low." << endl;
				cout << "Guess again: " << endl;
			}
			
			else if (userIn > random) 
			{
				cout << "Sorry, that too high." << endl;
				cout << "Guess again: " << endl;
			}
		}
		
		//to check if user input equals random
		else if (userIn == random) 
	    {
            cout << "Congratulations! You guessed it!" << endl;
		    cout << "I was thinking of the number " << random << endl;
		    cout << "\nThe number of guesses is " << numGuesses << endl;
		}
	}while (userIn != random); //end do-while loop

	return 0;
}