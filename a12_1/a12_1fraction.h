/*
* Class: CS 110B 
* File Name: fraction.h

 Description : Header file for fraction class. An object of fraction class
 contains two int data members, numerator and denominator, and represents a
 fraction value in the form of "a/b".
 
 Public Functions:
 
 fraction(int inNumerator = 0, int inDenominator = 1);
 Precondition:  inNumerator represents numerator of the fraction.
                inDenominator represents denominator of the function.      
 Postcondition: Creates an object. If parameter is empty assingns 
 				numerator and denominator to 0 and 1.
 				If parameter has only in numerator, represents 
 				a whole number.
 				If parameter has two in numbers, represents a 
 				fraction of type "a/b".
 				The fraction will always represent the 
                denominator as a positive value. 

 friend std::ostream& operator<<(std::ostream& out, const fraction& inFraction);
 Precondition:  "out" is an out stream. 
 				inFraction is a fraction.
 Postcondition: Checks if the absolute value of numerator is less than the 
 				denominator.If so, prints fraction.
 				Checks if inFraction numerator equals zero.If so, prints zero.
 				If everything is ok, simply print fraction.
 
 
 
 
 
 
 friend std::istream& operator>>(std::istream& in,fraction& inFraction);
 Precondition:  "in" is an in stream, 
 				inFraction is a fraction. 

 Postcondition: Reads a fraction, adds first number to the temp variable.
				If expression contains "+" :
					ignore "+" symbol and adds numerator,
					ingnore next symbol and adds denominator
					checks if temp less then 0 and if so,
					assigns to the fraction.
				If expression contains "/" :
					ignore "/" symbol and adds denominator,
					adds temp variable to the numerator
				Else:
					numerator = temp, denominator = 1.
				Numerator and denominator values will be set to the
                values that were read,simplified and returned.
              
              
                
 friend bool operator< (const fraction& inLeft, const fraction& inRight);
 Precondition:  inLeft and inRight are fraction objects or integers.
 Postcondition: Returns a boolean that represents the relation between 
                left and right fractions. If left fraction is less
                than right fraction, returns true. Else, returns false.
                
                
                
 friend bool operator<= (const fraction& inLeft, const fraction& inRight);
 Precondition:  inLeft and inRight are fraction objects or integers.
 Postcondition: Returns a boolean that represents the relation between
                left and right fractions. If left fraction is less
                than or equal to right fraction, returns true. 
                Else, returns false.
                
                
                
 friend bool operator> (const fraction& inLeft, const fraction& inRight);
 Precondition:  inLeft and inRight are fraction objects or integers.
 Postcondition: Returns a boolean that represents the relation between
                left and right fractions. If left fraction is greater
                than right fraction, returns true. Else, returns false.
                
                
                
 friend bool operator>= (const fraction& inLeft, const fraction& inRight);
 Precondition:  inLeft and inRight are fraction objects or integers.
 Postcondition: Returns a boolean that represents the relation between
                left and right fractions. If left fraction is greater
                than or equal to right fraction, returns true. 
                Else, it returns false.
                
                
                
 friend bool operator== (const fraction& inLeft, const fraction& inRight);
 Precondition:  inLeft and inRight are fraction objects or integers.
 Postcondition: Returns a boolean that represents the relation between
                left and right fractions. If left fraction is equal
                to right' fraction,returns true. Else, it returns false.
                
                
                
 friend bool operator!= (const fraction& inLeft, const fraction& inRight);
 Precondition:  inLeft and inRight are fraction objects or integers.
 Postcondition: Returns a boolean that represents the relation between
                left and right fractions. If left fraction is not
                equal to right fraction,returns true. Else, it returns false.
                
                
                
 friend fraction operator+ (const fraction& inLeft, const fraction& inRight);
 Precondition:  inLeft and inRight are fraction objects or integers.
 Postcondition: Returns a sum of two fractions.
 
 
 
 
 friend fraction operator- (const fraction& inLeft, const fraction& inRight);
 Precondition:  inLeft and inRight are fraction objects or integers.
 Postcondition: Returns a subtraction of two fractions.
 
 
 
 
 friend fraction operator* (const fraction& inLeft, const fraction& inRight);
 Precondition:  inLeft and inRight are fraction objects or integers.
 Postcondition: Returns a multiplication of two fractions.
 
 
 
 
 friend fraction operator/ (const fraction& inLeft, const fraction& inRight);
 Precondition:  inLeft and inRight are fraction objects or integers.
 Postcondition: Returns a division of two fractions.
 
 
 
 
 fraction operator+= (const fraction& inFraction);
 Precondition:  inFraction is a fraction object or integer.
 Postcondition: Calling fraction object uses overloaded operator+ function
                with itself and inFraction.
                
                
                
 fraction operator-= (const fraction& inFraction);
 Precondition:  inFraction is a fraction object or integer.
 Postcondition: Calling fraction object uses overloaded operator- function
                with itself and inFraction.
                
                
                
                
 fraction operator*= (const fraction& inFraction);
 Precondition:  inFraction is a fraction object or integer.
 Postcondition: Calling fraction object uses overloaded operator* function
                with itself and inFraction.
                
                
                
                
 fraction operator/= (const fraction& inFraction);
 Precondition:  inFraction is a fraction object or integer.
 Postcondition: Calling object uses overloaded operator/ function with itself
                and inFraction.
                
                
                
                
 fraction operator++ ();
 Precondition:  Calling object is of type fraction.
 Postcondition: Adds 1 to the fraction of the caller object, then
                returns that fraction object. Prefix increment.
                
                
                
                
 fraction operator++ (int);
 Precondition:  Calling object is of type fraction.
 Postcondition: Makes a copy of the calling fraction, adds 1 to the fraction
 				of the calling fraction, then returns the copy. Postfix
                increment.
                
                
                
                
 fraction operator-- ();
 Precondition:  Calling object is of type fraction.
 Postcondition: Subtracts 1 from the fraction of the calling function,
                then returns that fraction object. Prefix decrement.
                
                
                
                
 fraction operator-- (int);
 Precondition:  Calling object is a fraction.
 Postcondition: Makes a copy of the calling fraction, subtracts 1 from the
                fraction of the calling fraction, then returns the
                copy. Postfix decrement.
 */






#include <iostream>
#include <cassert>
#include <cmath>

namespace cs_fraction {

	class fraction {

	//variables
	private: int numerator;
			 int denominator;
			 void simplify();
	
	//functions	 
	public: 
			fraction(int inNumerator = 0, int inDenominator = 1);
			

			friend std::ostream& operator<<(std::ostream& out, const fraction& inFraction);
      		friend std::istream& operator>>(std::istream& in, fraction& inFraction);

			friend bool operator== (const fraction& inLeft, const fraction& inRight);
			friend bool operator!= (const fraction& inLeft, const fraction& inRight);
			friend bool operator> (const fraction& inLeft, const fraction& inRight);
			friend bool operator>= (const fraction& inLeft, const fraction& inRight);
			friend bool operator< (const fraction& inLeft, const fraction& inRight);
			friend bool operator<= (const fraction& inLeft, const fraction& inRight);
			

			friend fraction operator+ (const fraction& inLeft, const fraction& inRight);
      		friend fraction operator- (const fraction& inLeft, const fraction& inRight);
		    friend fraction operator* (const fraction& inLeft, const fraction& inRight);
		    friend fraction operator/ (const fraction& inLeft, const fraction& inRight);
		    
		    fraction operator+= (const fraction& inFraction);
	        fraction operator-= (const fraction& inFraction);
	        fraction operator*= (const fraction& inFraction);
	        fraction operator/= (const fraction& inFraction);
	        
	        fraction operator++ ();
	        fraction operator++ (int);
	        fraction operator-- ();
	        fraction operator-- (int);
	        
	};	//end class
}	//end namespace