#include <iostream>
using namespace std;

/*
* default constructor
* default values
*/
fraction:: fraction() 
{
	numerator = 0;
	denominator = 1;
}








/*
*overloaded constructor. Receives two int values
* and sets numerator and denominator.
*/
fraction:: fraction(int inNumerator,int inDenominator) 
{
	numerator = inNumerator;
	
	if(inDenominator == 0) 
	{
		denominator = 1;
	}
	else 
	{
		denominator = inDenominator;
	}
}









/*
* Operation "addedTo" represents a math formula
* a/b + c/d. After calculations returns result.
*/
fraction fraction:: addedTo(fraction inFraction)const {

	fraction result;
	
	result.numerator = (numerator * inFraction.denominator) + 
					   (inFraction.numerator * denominator);
	
	result.denominator = denominator * inFraction.denominator;
	
	result.simplify();	
	
	return result;
	
}








/*
* Operation "substract" represents a math formula
* a/b - c/d. After calculations returns result.
*/
fraction fraction:: subtract(fraction inFraction)const {
	
	fraction result;
	
	result.numerator = (numerator * inFraction.denominator) - 
					   (inFraction.numerator * denominator);
	
	result.denominator = denominator * inFraction.denominator;
	
	result.simplify();
	
	return result;
	
}








/*
* Operation "multipliedBy" represents a math formula
* a/b * c/d = ac/bd. After calculations returns result.
*/
fraction fraction:: multipliedBy(fraction inFraction)const {

	fraction result;
	
	result.numerator = numerator * inFraction.numerator;
	
	result.denominator = inFraction.denominator * denominator;
	
	result.simplify();
	
	return result;
	
}








/*
* Operation "dividedBy" represents a math formula
* a/b / c/d = ad/bc. After calculations returns result.
*/
fraction fraction:: dividedBy(fraction inFraction)const {

	fraction result;
	
	result.numerator = numerator * inFraction.denominator;
	
	result.denominator = denominator * inFraction.numerator;
	
	result.simplify();
	
	return result;
	
}








/*
* Operation "isEqualTo" compares two fraction objects 
* for equality. If so returns true.
*/
bool fraction::  isEqualTo(fraction inFraction)const {

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
void fraction:: print()const {

	cout << numerator << "/" << denominator << endl;
	
}








/*
*simplify() operation to check if fraction can be reduced.
*Looks for the smallest remainder,
*reduces values of the fraction and sets results.
*/
void fraction:: simplify()
{
	int num,den,temp;

	num = numerator;
	den = denominator;
	
	while (den != 0) 
	{
		temp = num % den;	// numerator mod denominator to get remainder
		num = den;		
		den = temp;	
	}

	//divide by remainder
	numerator /= num;
	denominator /= num;
}	