/*
* Class: CS 110B 
* Description: Checks if a string is a 
*              palindrome or not recursively.
* File Name: a16_2.cpp
*/
#include "mystring.h"
#include <iostream>
#include <string>
#include <cctype>

using namespace std;
using namespace cs_mystring;

bool isAPalindrome(myString inString, int bound1, int bound2);


int main() {
	
	myString string;
	bool status = true;
	
	while(status) {
		cout << "Enter a string: ";
		string.read(cin, '\n');
		
		if(string == "quit") {
			status = false;
		}
		
		else {
		    if(isAPalindrome(string, 0, (int) string.length() - 1)) {
                cout << string << " is a palindrome" << endl;
		    }
	        else {
            	cout << string << " is not a palindrome" << endl;
	        }
		}
	}
}









bool isAPalindrome(myString inString, int bound1, int bound2) {
	
	while( bound1 < bound2 && (ispunct(inString[bound1])) || (isspace(inString[bound1])) ) {
		bound1 += 1;
	}
	
	while( bound2 > 0 && (ispunct(inString[bound2])) || (isspace(inString[bound2])) ) {
		bound2 -= 1;
	}
	
	if(bound1 >= bound2) {
		return true;
	}
	
	else if(toupper(inString[bound1]) == toupper(inString[bound2])) {
		return isAPalindrome(inString, bound1 + 1, bound2 - 1);
	}
	
	else {
		return false;
	}
}

/* SAMPLE OUTPUT
Enter a string: Able was I, ere I saw Elba
Able was I, ere I saw Elba is a palindrome.
Enter a string: peanut butter
peanut butter is not a palindrome.
Enter a string: quit
*/