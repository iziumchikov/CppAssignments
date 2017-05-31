/*
* Class: CS 110B 
* Description: Program gives an experience with simple
* string functions.
* File Name: a7_1.cpp
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

//list of prototypes
int lastIndexOf(const char* inString, char target);
void reverse(char* inString);
int replace(char* inString, char target, char replacementChar);
int findSubstring(const char* inString, const char substring[]);
bool isPalindrome(const char* inString);
void toupper(char* inString);
int numLetters(const char* inString);
void read(char*& readMe);
void concatenate(char*& left, const char* right);



/*
* This function finds the last index where the target char
* can be found in the string.Function returns -1 if the target 
* char does not appear in the string. The function is case 
* sensitive (so 'b' is not a match for 'B').
*/
int lastIndexOf(const char* inString, char target){

    int count = 0;
    int result = -1;
    
    while (inString[count] != '\0')
    {
    	if(inString[count] == target)
    	{
    		result = count;
    	}
    	
    	count++;
    }
    return result;
}





/*
* This function alters any string that is passed in. 
* Its reverse the string.
*/
void reverse(char* inString){

	int count = 0;
	int length = strlen(inString);
	char temp;
	
	while( count < length/2 )
	{
		char temp = inString[count];
        inString[count] = inString[length - count - 1];
        inString[length - count - 1] = temp;
        
        count++;
	}
}




/*
* This function finds all instances of the char 'target' in the
* string and replace them with 'replacementChar'. It returns the
* number of replacements that it makes. If the target char does
* not appear in the string function return 0.
*/
int replace(char* inString, char target, char replacementChar){
	int count = 0;
	int replacementNum = 0;
	
	while (inString[count] != '\0')
	{
		if(inString[count] == target)
		{
			inString[count] = replacementChar;
			replacementNum++;
		}
		count++;
	}
	
	return replacementNum;
}




/*
* This function returns the index in string s where the 
* substring can first be found.It returns -1 if the substring 
* does not appear in the string.
*/
int findSubstring(const char* inString, const char substring[]){

	int result = -1;
	int count = 0;
	
	while(inString[count] != '\0')
	{
		if(substring[0] == inString[count] &&
		   substring[1] == inString[count + 1] &&  
		   substring[2] == inString[count + 2])
		   {
		   	result = count;
		   }
		count++;
	}
	
	return result;
}






/*
* This function returns true if the argument string is a 
* palindrome. It returns false if it is no.Function is
* case sensitive.
*/
bool isPalindrome(const char* inString){

	bool result;
	
	int count = 0;
	int equalChars = 0;	
	int length = strlen(inString);
	
	while(count < length/2)
	{
		if(tolower(inString[count]) == 
		   tolower(inString[length - count - 1]))
		{
			equalChars++;
		}
		
		count++;
	}
	
	if(equalChars == length/2)
	{
		result = true;
	}
	
	else
	{
		result = false;
	}
	
	return result;
}




/*
* This function converts the c-string parameter 
* to all uppercase.
*/
void toupper(char* inString){
    int count = 0;

	while(inString[count] != '\0')
	{
	    inString[count] = toupper(inString[count]);
	    count++;
	}
}




/*
* This function returns the number of letters in the c-string.
*/
int numLetters(const char* inString){
	int result = 0;
	int count = 0;
		
	while(inString[count] != '\0')
	{
		if(inString[count] == ' ')
		{
			result = result;
		}
		else
		{
			result++;
		}
		
		count++;
	}
	
	return result;
}





/*
* This function should use cin.getline() to read a c-string
* from the console into the parameter, readMe. The function
* will stop reading when a newline character is encountered.
*/
void read(char*& readMe)
{
   delete readMe;
   char stringsArray[80];
   cin.getline(stringsArray,80);
   readMe = new char[strlen(stringsArray)];
   strcpy(readMe,stringsArray);
}




/*
* This function modifies left so that it is equal 
* to the concatenation of left and right.
*/
void concatenate(char*& left,const char* right)
{  
    int length = strlen(left);
    int count = 0;
    
    while(left[count] != '\0')
    {
        //jumps right after word stored in left 
        //and starts coping data from right
        left[count + length] = right[count];
        count++;
    }
}





/*
* Main function contains test for each function.
*/ 
int main(){
	
	cout << "\n1.Test last index function: " << endl;
	char testLastIndex[] = {"YouH can design your own specialized Hfunctions for Hmanipulating strings."};
	cout << "String to test last index:\n" << testLastIndex <<endl;
	cout << "Target char is 'H' " << endl;
	cout << "The last index is: " << lastIndexOf(testLastIndex, 'H') << endl;
	
	cout << "\n2.Test reverse function: " << endl;
	char testReverse[] = {"flower"};
	cout << "Word to reverse is: "<< testReverse << endl; 
	reverse(testReverse);
	cout << "After reverse word is: " << testReverse << endl;
	
	cout << "\n3.Test replace function: " << endl;
	char testReplace[] = {"Programs are frequently written to print alphabetically sorted lists of items."};
	cout << "Replace all 's' from: \n" << testReplace << endl;
	replace(testReplace, 's', 'Q');
	cout << "After replacement: \n" << testReplace << endl;
	
	
	cout << "\n4.Test substring function: " << endl;
	char testSubstring[] = {"Skyscraper"};
	char substring[] = {"ysc"};
	char substring1[] = {"abc"};
	cout << "Word to test substring is " << testSubstring << " and substring is: " << substring << endl;
	cout << "The result is: "<< findSubstring(testSubstring, substring) << endl;
	cout << "Word to test substring is " << testSubstring << " and substring is: " << substring1 << endl;
	cout << "The result is: "<< findSubstring(testSubstring, substring1) << endl;
	
	cout << "\n5.Test palindrome function: " << endl;
	char palindrome1[] = {"abba"};
	char palindrome2[] = {"hannah"};
	char palindrome3[] = {"abc cba"};
	char palindrome4[] = {"maybe a palindrome"};
	
	cout << "Test: " << palindrome1 << endl;
    if (isPalindrome(palindrome1)) // send any array to determine if true
    {
        cout << "That is a palindrome." << endl;
    }
    else
    {
       cout << "That is not a palindrome." << endl;
    }
	
	cout << "Test: " << palindrome2 << endl;
    if (isPalindrome(palindrome2)) // send any array to determine if true
    {
        cout << "That is a palindrome." << endl;
    }
    else
    {
       cout << "That is not a palindrome." << endl;
    }
    
    cout << "Test: " << palindrome3 << endl;
    if (isPalindrome(palindrome3)) // send any array to determine if true
    {
        cout << "That is a palindrome." << endl;
    }
    else
    {
       cout << "That is not a palindrome." << endl;
    }
    
    cout << "Test: " << palindrome4 << endl;
    if (isPalindrome(palindrome4)) // send any array to determine if true
    {
        cout << "That is a palindrome." << endl;
    }
    else
    {
       cout << "That is not a palindrome." << endl;
    }
    
    cout << "\n6.Test toupper function: " << endl;
    char testUp[] = {"you can design your oWn spEcialized Functions for Manipulating strings."};
    cout << "Before toupper function:\n" << testUp << endl;
    toupper(testUp);
    cout << "After toupper function:\n" << testUp << endl;
    
    cout << "\n7.Test numLetters function: " << endl;
    char numTest[] = {"number of letters"};
    cout << "To test: " << numTest << endl;
    cout << "Contains: "<< numLetters(numTest) << " letters" << endl;
    
    cout << "\n8.Test read function: " << endl;
    char* mystr = NULL;
	cout << "Enter a string: ";
	read(mystr);
	cout << "You entered: " << mystr << endl;
	
	
	cout << "\n9.Test concatenate function: " << endl;
    char* left;
    char* right;
    
    char temp1[41] = {"George "};
    char temp2[41] = {"Washigton"};


    //two arrays for left side variable
    left = new char[strlen(temp1) + strlen(temp2) + 1];
    right = new char[strlen(temp2)];
    
    //copy data from the word variables
    strcpy(left, temp1);
    strcpy(right, temp2);
    
    cout << "Before concat function:\n" << left << " and " << right << endl;
    concatenate(left, right);
    cout << "After concat function:\n" << left << endl;

	return 0;
}



/* SIMPLE OUTPUT


1.Test last index function: 
String to test last index:
YouH can design your own specialized Hfunctions for Hmanipulating strings.
Target char is 'H' 
The last index is: 52

2.Test reverse function: 
Word to reverse is: flower
After reverse word is: rewolf

3.Test replace function: 
Replace all 's' from: 
Programs are frequently written to print alphabetically sorted lists of items.
After replacement: 
ProgramQ are frequently written to print alphabetically Qorted liQtQ of itemQ.

4.Test substring function: 
Word to test substring is Skyscraper and substring is: ysc
The result is: 2
Word to test substring is Skyscraper and substring is: abc
The result is: -1

5.Test palindrome function: 
Test: abba
That is a palindrome.
Test: hannah
That is a palindrome.
Test: abc cba
That is a palindrome.
Test: maybe a palindrome
That is not a palindrome.

6.Test toupper function: 
Before toupper function:
you can design your oWn spEcialized Functions for Manipulating strings.
After toupper function:
YOU CAN DESIGN YOUR OWN SPECIALIZED FUNCTIONS FOR MANIPULATING STRINGS.

7.Test numLetters function: 
To test: number of letters
Contains: 15 letters

8.Test read function: 
Enter a string: sdfsd fsd fsdf sdf ds
You entered: sdfsd fsd fsdf sdf ds

9.Test concatenate function: 
Before concat function:
George  and Washigton
After concat function:
George Washigton

*/