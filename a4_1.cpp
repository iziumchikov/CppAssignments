/*
* Class: CS 110B 
* Description: Program reads five cards from the user, 
* then analyzes the cards and prints out the category 
* of hand that they represent.
* File Name: a4_1.cpp
*/
#include <iostream>
using namespace std;


//list of prototypes
bool containsFourOfaKind(const int hand[]);
bool containsFullHouse(const int hand[]);
bool containsThreeOfaKind(const int hand[]);
bool containsTwoPair(const int hand[]);
bool containsPair(const int hand[]);
bool containsStraight(const int hand[]);

//list of helper methods
int askUserForCards(int k);
int checkIfCardsEqual(int card, const int hand[]);
int checkPairs(const int hand[]);
bool firstStraightCard(int card, const int hand[]);

//list of constants
const int LENGTH = 5; //array length
const int LOW = 2;	//lowest card
const int HIGH = 9;	//highest card


/*
* Main function. Uses helper function askUserForCards.
* After, checks what kind of hand user entered.
*/
int main() {
	int hand[LENGTH];
	int i = 0;
	
    cout << "Enter five numeric cards, no face cards. Use 2 - 9." << endl;
    
	while (i < LENGTH) 
	{
		hand[i] = askUserForCards(i);
		i++;
	}
	
	if(containsFourOfaKind(hand)) {
		cout << "Four of a kind!" << endl;
	}
	else if(containsFullHouse(hand)) {
		cout << "Full House!" << endl;
	}
	else if(containsStraight(hand)) {
		cout << "Straight!" << endl;
	}
	else if(containsThreeOfaKind(hand)) {
		cout << "Three of a kind!" << endl; 
	}
	else if(containsTwoPair(hand)) {
		cout << "Two pair!" << endl;
	}
	else if(containsPair(hand)) {
		cout << "Pair!" << endl;
	}
	else {
		cout << "High card!" << endl;
	}
	
	return 0;
}

/*
* Asks user to enter a card and returns
* card value.Check for correct input. 
*/
int askUserForCards(int k) {
	
	int card;

	cout << "Card " << k + 1 << " : ";
	cin >> card;
	
	while(card < LOW || card > HIGH) 
	{
		cout << "Wrong choice. Use 2 - 9" << endl;
		cout << "Card " << k + 1 << " : ";
		cin >> card;;
	}
	return card;
	
	}

/*
* Function receives an array. Passes through it,by using "for loop".
* Each step calls helper function checkIsCardsEqual to count
* how many times times card appears in the hand. Passes all cards 
* from 2 to 9 and card appeared 4 times returns true.
*/
bool containsFourOfaKind(const int hand[]) {
    for (int i = LOW; i <= HIGH; i++) 
    {
        if (checkIfCardsEqual(i, hand) == 4) 
        {
            return true;
        }
    }
    
    return false;
}

/*
* Function receives an array and calls two helper function: 
* containsThreeOfaKind and checkPairs. if both are true, then
* function returns true.
*/
bool containsFullHouse(const int hand[]) {
    return (containsThreeOfaKind(hand) && checkPairs(hand) == 1);
}




/*
* Function receives an array.Passes through it by "for loop".
* Each step calls helper function firstStraightCard,sends index and 
* array.Returns true if helper method returns true, in other cases
* returns false.
*/
bool containsStraight(const int hand[]) {
    for (int i = LOW; i <= HIGH - (LENGTH + 1); i++) 
    {
        if (firstStraightCard(i, hand))
        {
            return true;
        }
    }
    
    return false;
}

/*
* Function receives an array and first card. Passes through array
* by "for loop" and uses as an index the first card value and moves
* till first card + 4. Each step calls helper function checkIsCardsEqual
* to check first card in the array. If no such cards in array(hand)
* returns false, otherwise returns true and continue iteration.
*/

bool firstStraightCard(int card, const int hand[]) {
    for (int i = card; i <= card + (LENGTH - 1); i++) 
    {
        if (checkIfCardsEqual(i, hand) != 1) 
        {
            return false;
        }
    }
    return true;
}

/*
* Function receives an array. Passes through array
* by "for loop". Each step calls helper function 
* checkIsCardsEqual and sends index. If 3 cards
* are equal returns true.
*/

bool containsThreeOfaKind(const int hand[]) {
    for (int i = LOW; i <= HIGH; i++) 
    {
        if (checkIfCardsEqual(i, hand) == 3) 
        {
            return true;
        }
    }
    
    return false;
}

/*
* Function uses helper function pairChecker
* to check if array contains two pairs.
*/
bool containsTwoPair(const int hand[]) {
    return checkPairs(hand) == 2;
}

/*
* Function uses helper function pairChecker
* to check if array contains one pair.
*/
bool containsPair(const int hand[]) {
    return checkPairs(hand) == 1;
}

/*
* Function receives an array. Passes through array
* by "for loop".Each step it calls helper function 
* checkIfCardsEqual. If helper function returns 
* value 2 increases pairs variable by 1 and continue 
* iteration.
*/
int checkPairs(const int hand[]) {
    int pairs = 0;
    
    for (int i = LOW; i <= HIGH; i++) 
    {
        if (checkIfCardsEqual(i, hand) == 2) 
        {
            pairs++;
        }
    }
    
    return pairs;
}

/*
* Function receives card and an array. Checks how many times
* card appears in the array. Each time when card in the array,
* function increments variable count by 1 and continue iteration.
* retruns number of equal cards
*/

int checkIfCardsEqual(int card, const int hand[]) {
    int count = 0;
    
    for (int i = 0; i < LENGTH; i++) 
    {
        if (hand[i] == card) 
        {
            count++;
        }
    }
    return count;
}
