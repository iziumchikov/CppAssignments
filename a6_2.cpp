
/*
* Class: CS 110B 
* Description: Program is the same as program for assignment 5,
* but it starts out by asking the user how many scores will be entered.
* Program allocate appropriate arrays, and then proceed just like 
* the original High Scores assignment.
* File Name: a6_2.cpp
*/

#include <iostream>
using namespace std;

//function prototypes
void initializeArrays(string names[], int scores[], int size);
void sortData(string names[], int scores[], int size);
void displayData(const string names[],const int scores[], int size);


/*
* Main function
*/
int main()
{
	int length;
	cout << "How may scores will you enter?";
	cin >> length;
	
	//initialize arrays
	string *names = new string[length];
	int *scores = new int[length]; 
    
    //call functions
    initializeArrays(names, scores, length);
    sortData(names, scores, length);
    displayData(names, scores, length);
    
    //clean arrays after execution
    delete [] names;
    names = NULL;
    delete [] scores;
    scores = NULL;
    
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
    
    for (int i = 0; i < size; i++) {
        cout << names[i] << ": " << scores[i] << endl;
    }
    cout << endl;
}
