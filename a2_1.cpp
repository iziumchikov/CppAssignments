/*
* Class: CS 110B 
* Description: Program represents simple blackjack game.
* Generates two random number in range from 1 to 10.
* Adds them to the total variable. Asks, if user wants to 
* get another card.If so generates a new card and adds it 
* to the total variable until it wont be greater then 21.
* After asks, if user wants to continue.
* File Name: a3_1.cpp
*/
#include <iostream>
#include <cstdlib> // needed to use srand and rand
#include <ctime> // needed to use time

	
const int MIN_NUM = 1,
		  MAX_NUM  = 10;

using namespace std;

int main() {
		
		//list of variables
		int newCard,
			firstCard,
			secondCard, 
			total;
			
		char anotherCard,
			 continueGame; 
			
		bool bust = false; 
		
		do {
			//generates two random numbers 
			//in a range of assigned constants		
			firstCard = rand() % MAX_NUM + MIN_NUM;
	    	secondCard = rand() % MAX_NUM + MIN_NUM;
	    	srand(time(NULL));
			
			//adds cards to total variable
	    	total = firstCard + secondCard;
	    	
	    	//Prints results
	    	cout << "First cards: " << firstCard << ", " << secondCard << endl;
	    	cout << "Total: " << total << endl;
	    	
		    	do{
		            cout << "Do you want another card? (y/n): ";
		            cin >> anotherCard;
		            
		            //stops current execution of this loop, if
		            //user doesn't want a new card.
					if(anotherCard != 'y') {
					
					    //I'm not sure if it is correct
		                //to use "break" statement.
		            	break;
		        	}
		        	
		            newCard = rand() % MAX_NUM + MIN_NUM;
		            total += newCard;
		            
		    		cout << "Card: " << newCard << endl;
			    	cout << "Total: " << total << endl;
			    	
			    	//checks if total greater then 21,
	    			//if so prints "Bust' message and
	    			//sets boolean variable "bust"
	    			//to true
		            if (total > 21) {
		                cout << " Bust" << endl; 
		                bust = true;
		            }
		            
		        } while(bust != true);
	        
	        //asks user if he wants to play again
			cout << "Would you like to play again? (y/n): ";
			cin >> continueGame;
			    
		}while(continueGame == 'Y' || continueGame == 'y');
		
		return 0;
	}