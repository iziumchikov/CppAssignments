/*
* Class: CS 110B 
* Description: Reverse char array recursively.
* File Name: a16_1.cpp
*/

#include <iostream>
#include <cstring>

using namespace std;
 
void reverseWithinBounds(char array[], int bound1, int bound2);
void reverseCstring(char *);









void reverseWithinBounds(char array[], int bound1, int bound2) {
    if (bound1 < bound2)
    {
        char temp = array[bound1];
 
        array[bound1] = array[bound2];
        array[bound2] = temp;
 
        //Recursive call
        reverseWithinBounds(array, bound1 + 1, bound2 - 1);
    }
}









void reverseCstring(char *string) {
	reverseWithinBounds(string, 0, (int) strlen(string) - 1);
	}
	
	
	
	
	
	
	
int main()
{
	
   /* char array[] = { 'A', 'B', 'C', 'D', 'E' };
    cout << "Array: " << array << endl;
    reverseWithinBounds(array, 1, 4);
    cout << "Revesed array: " << array << endl; */
    
    char *array = new char[5];
    strcpy(array, "Elba");
    cout << "The word is: " << array << endl;
    reverseCstring(array);
    cout << "Reversed word: " << array << endl;
    
    
}

/* SAMPLE OUTPUT

Array: ABCDE
Revesed array: AEDCB


The word is: Elba
Reversed word: ablE
*/
