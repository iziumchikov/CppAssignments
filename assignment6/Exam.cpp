/*
* Class: CS 110A
* Description: Compares student answers list with 
* correct answers list and prints result.
* Assignment #6
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main(){ 
	
	//list of variables
	const int NUM_QUESTIONS = 20;	//to hold size
	const char correctAnswers[NUM_QUESTIONS] = {'A','D','B','B','C', //correct answers char array
	                                      		'B','A','B','C','D',
	                                      		'A','C','D','B','D',
	                                     	    'C','C','A','D','B'};
	
	int correct = 0, incorrect = 0;		//counters
	
    char studentAnswers[NUM_QUESTIONS];		//to hold student answers

	cout << "Please enter the sudent's answers for each of the questions." << endl;
	cout << "Press Enter after typing each answer." << endl;
	cout << "Please enter only an A,B,C, or D for each question" << endl;
	
	//asks user to enter student answers
	for(int i = 0; i < NUM_QUESTIONS;i++)
	{
		cout << "Question " << (i+1) << ":" ;
		cin >> studentAnswers[i];
		
		//input validation loop
		while(studentAnswers[i] != 'A' &&
			  studentAnswers[i] != 'B' &&
			  studentAnswers[i] != 'C' &&
			  studentAnswers[i] != 'D') {
			  		cout << "Re-enter answer " << i << ":" ;
					cin >> studentAnswers[i];
			  }
	}
	
	//compare answers and count correct and incorrect answers
	for (int i = 0; i < NUM_QUESTIONS;i++) 
	{
		if(studentAnswers[i] == correctAnswers[i]) 
		{
			correct += 1;
		}
			
		else 
		{
			incorrect += 1;
		}	
	}
	
	//prints the result
    if (correct > 15) 
   	{
   		cout << "The student passed the exam" << endl << endl;
	}
	else 
	{
		cout << "The student did not pass the exam" << endl;
	}
		
	cout << "Correct answers: " << correct << endl;
	cout << "Incorrect answers: " << incorrect << endl <<endl;
	cout << "Questions that were answered incorrectly: " <<endl;
	
	//prints numbers of incorrect answers
	for (int i = 0; i < NUM_QUESTIONS; i++) 
	{
		if (studentAnswers[i] != correctAnswers[i])
		{
			cout << (i+1) << endl;				
		}
	}
	
	return 0;
}


