/*
* Class: CS 110A
* Description: Mobile Provider calculates a customer’s monthly bill. 
* Program asks which package the customer has purchased and 
* how many minutes were used. After displays the total amount due and
* if there were any savings displays it also.
* Lab 6
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	//list of variables
	const double packageA = 39.99,
				 packageB = 59.99,
				 packageC = 69.99;
				 
	double minutes, total,savingsA,
						  savingsB,
						  savingsC;
						  
	char choice;
	
	do{
		//Program menu
		cout << endl;
		cout << "Select a subscription package:" << endl;
		cout <<	"1. Package A" << endl;	 
		cout << "2. Package B" << endl;
		cout << "3. Package C" << endl;
		cout << "4. Quit" << endl;
		cin >> choice;
		
		//input validation be sure the user only 
		//selects package A, B, or C.
		if(choice != '1' && choice != '2' && choice != '3')
		{
			cout << "Wrong choice!" << endl;
			cout << "Try again" << endl;
		}

		//If user choice was Package A
		if(choice == '1')
		{
			//Ask minutes
			cout << "How many minutes were used? ";
			cin >> minutes;
			
			//If minutes in provided limit
			// then no saving, prints just
			// amount bill.
			if(minutes >= 0  && minutes <= 450)
			{
				cout << "The total amount due is $" << packageA << endl;
			}
			
			//else minutes not in provided limit
			else
			{	
				//calculate total
				total = packageA + ((minutes - 450) * 0.45);
                cout << "The total amount due is $" << total << endl;
                
                //check if total greater then package B.
                //If so prints Savings with package B
                //and checks if total greater then package C.
                //If so prints Saving with package C.
				if (total >= packageB)
				{
			        savingsB = total - packageB;
			        cout << "Savings with Package B: $" << setprecision(2) << fixed << savingsB << endl;
			        
			        if(total >= packageC)
			        {
			        	savingsC = total - packageC;
				    	cout << "Savings with Package C: $" << setprecision(2) << fixed << savingsC << endl;
			        }
				}
			}
		}
		//Else if user choice was Package B
		else if (choice == '2')
		{
			//Aks minutes
			cout << "How many minutes were used? ";
			cin >> minutes;
		
			//If used minutes less or equal to monthly
			//provided prints amount bill, also checks
			//if used minutes less or equal to package A
			//provided monthly minutes. If so prints savings
			// with package A
			if(minutes <= 900)
			{	
			
			    cout << "The total amount due is $" << packageB << endl;
			    
				if(minutes <= 450)
				{
					//calculate savings
				    savingsA = packageB - packageA; 
				    cout << "Savings with Package A: $" << setprecision(2) << fixed << savingsA << endl;
				}
			}
			
			//else minutes not in monthly provided minutes
			else
			{	
				//calculate totak
			    total = packageB + ((minutes - 900) * 0.40);
			    cout << "The total amount due is $" << total << endl;
			    
			    //checks if total greater or equal to package C abill amount
			    //if so calculates savings with C and prints result
			    if(total >= packageC)
			    {
			        savingsC = total - packageC;
				    cout << "Savings with Package C: $" << setprecision(2) << fixed << savingsC << endl;
			    }
			}
		}
		
		//else if user choice was ackage C
		else if (choice == '3')
		{
			//Asks minutes prints amount bill
			cout << "How many minutes were used? ";
			cin >> minutes;
			cout << "The total amount due is $" << packageC << endl;
			
			//check if used minutes less or equal to provided minutes
			//of Package B. If so checks if used minutes less or equal
			//to provided minutes of Package A. If so calculates savings,
			//and prints Result. Then calculates savings for package B
			//and prints result.
			if(minutes <= 900)
			{
			    if(minutes <= 450)
				{
				    savingsA = packageC - packageA; 
				    cout << "Savings with Package A: $" << setprecision(2) << fixed << savingsA << endl;
				}
			    savingsB = packageC - packageB; 
			    cout << "Savings with Package B: $" << setprecision(2) << fixed << savingsB << endl;
			}
		}
	}while(choice != 4);
	
	return 0;
	}