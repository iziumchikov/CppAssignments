/*
* Class: CS 110B 
* Description: Program represents "fraction" class and 
* client program. "Fraction" class contains operations
* to work with fractions.
* File Name: a9_1.cpp
*/

#include <iostream>
using namespace std;

/*
* Fraction class.
*/
class fraction {

	//variables
	private: int numerator;
		     int denominator;
	
	//functions	 
	public: 
			void set(int inNumerator, int inDenominator);
			void print();
			
			fraction addedTo(fraction inFraction);
			fraction subtract(fraction inFraction);
			fraction multipliedBy(fraction inFraction);
			fraction dividedBy(fraction inFraction);
			bool isEqualTo(fraction inFraction);
			
};








/*
* A set() operation that takes two integer arguments, 
* a numerator and a denominator, and sets the calling 
* object accordingly.
*/
void fraction:: set(int inNumerator, int inDenominator) {

	numerator = inNumerator;
	denominator = inDenominator;
	
}








/*
* Operation "addedTo" represents a math formula
* a/b + c/d. After calculations returns result.
*/
fraction fraction:: addedTo(fraction inFraction) {

	fraction result;
	
	result.numerator = (numerator * inFraction.denominator) + 
					   (inFraction.numerator * denominator);
	
	result.denominator = denominator * inFraction.denominator;
	
	return result;
	
}








/*
* Operation "substract" represents a math formula
* a/b - c/d. After calculations returns result.
*/
fraction fraction:: subtract(fraction inFraction) {
	
	fraction result;
	
	result.numerator = (numerator * inFraction.denominator) - 
					   (inFraction.numerator * denominator);
	
	result.denominator = denominator * inFraction.denominator;
	
	return result;
	
}








/*
* Operation "multipliedBy" represents a math formula
* a/b * c/d = ac/bd. After calculations returns result.
*/
fraction fraction:: multipliedBy(fraction inFraction) {

	fraction result;
	
	result.numerator = numerator * inFraction.numerator;
	
	result.denominator = inFraction.denominator * denominator;
	
	return result;
	
}








/*
* Operation "dividedBy" represents a math formula
* a/b / c/d = ad/bc. After calculations returns result.
*/
fraction fraction:: dividedBy(fraction inFraction) {

	fraction result;
	
	result.numerator = numerator * inFraction.denominator;
	
	result.denominator = denominator * inFraction.numerator;
	
	return result;
	
}








/*
* Operation "isEqualTo" compares two fraction objects 
* for equality. If so returns true.
*/
bool fraction::  isEqualTo(fraction inFraction) {

	bool result = false;
	
    if(numerator * inFraction.denominator == 
   	   denominator * inFraction.numerator) 
    {
   		return result = true;
   	}
    
    else 
    {
        return result;
    }
	
}









/*
* Displays the value of a fraction object on the screen 
* in the form numerator/denominator.
*/
void fraction:: print() {

	cout << numerator << "/" << denominator << endl;
	
}









/*
* Main function contains client program for fraction class
*/
int main()
{
    fraction f1;
    fraction f2;
    fraction result;

    f1.set(9, 8);
    f2.set(2, 3);

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
}
	

	
	
	
	
	
	
	
/* SAMPLE OUTPUT: 

The product of 9/8
 and 2/3
 is 18/24

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
*/