/*
* Class: CS 110B 
* Description: Program represents "fraction" class and 
* client program. "Fraction" class contains operations
* to work with fractions.
* File Name: a9_1.cpp
*/

#include <iostream>
#include "fraction.h"
using namespace std;


/*
* Main function contains client program for fraction class
*/
int main()
{
    fraction f1(9,8);
    fraction f2(2,3);
    fraction result;

    cout << "The result starts off at ";
    result.print();
    cout << endl;

    cout << "The product of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.multipliedBy(f2);
    result.print();
    cout << endl;

    cout << "The quotient of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.dividedBy(f2);
    result.print();
    cout << endl;

    cout << "The sum of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.addedTo(f2);
    result.print();
    cout << endl;

    cout << "The difference of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.subtract(f2);
    result.print();
    cout << endl;

    if (f1.isEqualTo(f2)){
        cout << "The two fractions are equal." << endl;
    } else {
        cout << "The two fractions are not equal." << endl;
    }
    
    const fraction f3(12, 8);
    const fraction f4(202, 303);
    result = f3.multipliedBy(f4);
    cout << "The product of ";
    f3.print();
    cout << " and ";
    f4.print();
    cout << " is ";
    result.print();
    cout << endl;
}
	

	
	
	
	
	
	
	
/* SAMPLE OUTPUT: 

The result starts off at 0/1

The product of 9/8
 and 2/3
 is 3/4

The quotient of 9/8
 and 2/3
 is 27/16

The sum of 9/8
 and 2/3
 is 43/24

The difference of 9/8
 and 2/3
 is 11/24

The two fractions are not equal.
The product of 12/8
 and 202/303
 is 1/1
*/