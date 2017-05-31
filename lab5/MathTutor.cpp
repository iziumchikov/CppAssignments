/*
* Class: CS 110A
* Description: Program asks user what calculations to do.
* Generates two random numbers from 1 to 10.Checks user input,
* and asks user to answer.
* Lab 5
*/
#include <iostream>
#include <cstdlib>	//to use random
using namespace std;

int main(){
    
    //list of variables
	int number1, number2,choice,result,answer;
	
	do{
	cout << "Main menu:"<< endl;
	cout << "1: Addition"<< endl;
	cout << "2: Substraction: "<< endl;
	cout << "3: Multiplication "<< endl;
	cout << "4: Exit" << endl;
	cout << "Enter choice: " << endl;
	cin >> choice;
	
	//If statement to check if user input
	//is correct.
	if ( choice < 1 || choice > 4) 
	{
		cout << "U have to enter number from 1 to 3"
			 << " or enter 4 to exit" << endl;
	}
	
	//generates 2 random numbers 1 and 2 from 1 to 10
	number1 = rand() % 9 + 1;
	number2 = rand() % 9 + 1;
	
	//if user choice equals addition
	if (choice == 1)
	{
		//result of addition
		result = number1 + number2;
		
		//asks user to answer
		cout << "What is " << number1 << " + " << number2 
			 << "?" << endl;
		cin >> answer;
		
		//compare result and user answer.
		//prints response
		if(result == answer)
		{
			cout << "Correct" << endl;
		}

		else
		{
			cout << "Your answer is wrong. "
				 << "The correct answer is " << result << endl;; 
		}
	}//end if
	
	//if user choice equals subtraction
	else if (choice == 2)
	{	
		//checks if number1 less or equals
		//number2, then do-while loop
		//generates new numbers, while
		//condition is not true
        if(number1 <= number2)
        {
            do{
                number1 = rand() % 9 + 1;
	        	number2 = rand() % 9 + 1;
            }while(number1 <= number2);
        }
            
		//result of subtraction
		result = number1 - number2;
		
		//asks user to answer
		cout << "What is " << number1 << " - " << number2 
			 << "?" << endl;
		cin >> answer;
			
			//compare result and user answer.
			//prints response
			if(result == answer)
			{
				cout << "Correct" << endl;
			}
		
			else
			{
				cout << "Your answer is wrong. "
				 	 << "The correct answer is " << result <<endl; 
			}
	}//end if
	
	//if user choice equals multiplication
	else if (choice == 3)
	{
		//result of multiplication
        result = number1 * number2;
        
        //asks user to answer
		cout << "What is " << number1 << " * " << number2 
			 << "?" << endl;
		cin >> answer;
			
			//compare result and user answer.
			//prints response
			if(result == answer)
			{
				cout << "Correct" << endl;
				cout << endl;
			}
		
			else
			{
				cout << "Your answer is wrong. "
				 	 << "The correct answer is " << result <<endl; 
				cout << endl;
			}
	}}while(choice != 4); // if user choice is 4, then program will be terminated
	return 0;
}