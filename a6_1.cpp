/*
* Class: CS 110B 
* Description: Program represents simple work with pointers.
* File Name: a6_1.cpp
*/

#include <iostream>
using namespace std;

//function prototypes
void noNegatives (int *);
void swap(int *, int *);

int main()
{
    //Creates two integer variables named x and y
    int x,
        y;
    
    //Creates an int pointer named p1
    int *p1 = NULL;
    
    //Stores the address of x in p1
    p1 = &x;
    
    //sets the value of x to 99 using pointer
    *p1 = 99;
    
    //displays the value of x
    cout << x << endl;
    
    //display the value of x using pointer
    cout << *p1 << endl;
    
    //Stores the address of y in p1
    p1 = &y;
    
    //sets the value of y to -300 using pointer
    *p1 = -300;
    
    //Create two new variables,new pointer point to x
    int temp,
    *p2 = NULL;
    p2 = &x;
    
    //swap the values in x and y
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    
    /*
    * Function accepts the address of an int variable. 
    * If the value of this integer is negative then 
    * it sets it to zero.
    */
    void noNegatives (int *x)
	{
    	if (*x < 0)
    	{
        	*x = 0;
    	}
	}
    
    //call noNegatives function, passing x and y as arguments
    noNegatives(&x);
    noNegatives(&y);
    
    //Using p2 to display the values in x and y
    p2 = &x;
    cout << "x is: " << *p2 << endl;
    
    p2 = &y;
    cout << "y is: " << *p2 << endl;
    
    //declare an array to hold 2 int values
    const int SIZE = 2;
    int a[SIZE];
    
    //Creates an int array named 'a' with two elements. 
    //Makes p2 point to the first element of a.
    p2 = &x;
    a[0] = *p2;
    
    p2 = &y;
    a[1] = *p2;
    
    //output the address of the first and second elements in the array
    cout << a << endl;
    cout << a + 1 << endl;
    
    //swap elements in the array using pointers p1 and p2
    p1 = &a[0];
    p2 = &a[1];
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    
    //output array elements
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Value " << i + 1 << " is: " << *(a + i) << endl;
    }
    
    //Use p1, p2, and temp to swap the values in the two elements of array 'a'.
    swap(&x, &y);
    cout << "x is: " << x << endl;
    cout << "y is: " << y << endl;
    
    swap(&a[0], &a[1]);
    cout << "The first element of the array is now: " << *a << endl;
    cout << "The second element of the array is now: " << *(a + 1) << endl;
    
    //end of program 1
    return 0;
}

void swap (int *pointer1, int *pointer2)
{
    int temp;
    temp = *pointer1;
    *pointer1 = *pointer2;
    *pointer2 = temp;
}