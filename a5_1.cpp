/*
* Class: CS 110B 
* Description: Program records high-score data for a fictitious game. 
* The program asks the user to enter five names, and five scores. 
* It will store the data in memory, and print it back out sorted by score.
* File Name: a5_1.cpp
*/

#include <iostream>
using namespace std;

//function prototypes
void initializeArrays(string names[], int scores[], int size);
void sortData(string names[], int scores[], int size);
void displayData(const string names[],const int scores[], int size);

const int LENGTH = 5;

/*
* Main function
*/
int main()
{
	//declare two arrays
    string names[LENGTH];
    int scores[LENGTH];
    
    //call functions
    initializeArrays(names, scores, LENGTH);
    sortData(names, scores, LENGTH);
    displayData(names, scores, LENGTH);
    
    return 0;
}

/*
* Function receives two arrays and array size. Each step
* asks user to enter name and score.
*/
void initializeArrays(string names[], int scores[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the name for score #" << i+1 << " : ";
        cin >> names[i];
        cout << "Enter the score for score #" << i+1 << " : ";
        cin >> scores[i];
    }
}

/*
* Function receives two arrays and array size. 
* Passes through it,by using "for loop". Each step
* loop checks if scores 1 less then scores two. If 
* so, swaps scores numbers in scores array and swaps 
* names in names array.
*/
void sortData(string names[], int scores[], int size)
{
    
    int temp_scores;
  	string temp_names;
  	
  	bool status = true; //to control execution process
  	
  	while(status == true) 
  	{
  		status = false;
  		
  		for(int i = 0; i < size; i++) 
  		{
  			//checks if score 1 less then
  			//score two
  			if(scores[i] < scores[i+1]) 
  			{
  				//swaps scores
  				temp_scores = scores[i];
  				scores[i] = scores[i+1];
  				scores[i+1] = temp_scores;
  				
  				//swap names
  				temp_names = names[i];
  				names[i] = names[i+1];
  				names[i+1] = temp_names;
  				status = true;
  			}
  		}
  	}
}

/*
* Function receives two arrays and array size.
* Prints both of them.
*/
void displayData (const string names[],const int scores[], int size)
{
    cout << "\nTop Scorers:\n";
    for (int i = 0; i < size; i++)
    {
        cout << names[i] << ": " << scores[i] << endl;
    }
    cout << endl;
}
