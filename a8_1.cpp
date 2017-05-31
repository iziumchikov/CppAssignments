
/*
* Class: CS 110B 
* Description: This program is modification of assingmeent 6,
* that uses instead of arrays a struct called "highScore".
* File Name: a8_1.cpp
*/

#include <iostream>
using namespace std;

const int charSize = 24;

//structure
struct highScore
{
	int score;
	char name[charSize];
};

//function prototypes
void initializeData(highScore scores[],int size);
void sortData(highScore scores[],int size);
void displayData(const highScore scores[],int size);







/*
* Main function
*/
int main()
{
    //get struct size from user
	int size;
	cout << "How may scores will you enter? ";
	cin >> size;
	
	//initialize struct
	highScore *scores = new highScore[size];
	
	//call functions
	initializeData(scores, size);
	sortData(scores, size);
	displayData(scores, size);
	
	return 0;
}









/*
* Function receives highscore struct and array size. Each step
* asks user to enter name and score.
*/
void initializeData (highScore scores[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the name for score # " << i+1 << ": ";
		cin >> scores[i].name;
		cout << "Enter the score for score # " << i+1 << ": ";
		cin >> scores[i].score;
	}
}









/*
* Function receives highscore struct and array size. 
* Passes through it,by using "for loop". Each step
* loop checks if scores 1 less then scores two. If 
* so, swaps scores and name in highscore struct.
*/
void sortData(highScore scores[], int size)
{
    
    highScore temp;
    
  	for(int i = 0; i < size - 1; i++) 
  	{
  		//checks if score 1 less then
    	//score two
  		if(scores[i].score < scores[i+1].score) 
  		{   
  		    temp = scores[i];
			scores[i] = scores[i+1];
			scores[i+1] = temp;
  		}
  	}
  	
}









/*
* Function receives highscore struct and array size.
* Prints struct.
*/
void displayData (const highScore scores[], int size)
{
    cout << "\nTop Scorers:\n";
    
    for (int i = 0; i < size; i++) 
    {
        cout << scores[i].name << ": " << scores[i].score << endl;
    }
    cout << endl;
}








/*  Sample output
How may scores will you enter? 4
Enter the name for score # 1: Suzy
Enter the score for score # 1: 9900
Enter the name for score # 2: kim
Enter the score for score # 2: 1000000
Enter the name for score # 3: Armando
Enter the score for score # 3: 822
Enter the name for score # 4: Tim
Enter the score for score # 4: 514

Top Scorers:
kim: 1000000
Suzy: 9900
Armando: 822
Tim: 514
*/
