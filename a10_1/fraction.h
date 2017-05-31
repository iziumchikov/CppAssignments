/*
* Fraction class.
*/
class fraction {

	//variables
	private: int numerator;
			 int denominator;
	
	//functions	 
	public: 
			// default constructor
			fraction();
			//overloaded constructor
			fraction(int, int);

			void print()const;
			fraction addedTo(fraction inFraction)const;
			fraction subtract(fraction inFraction)const;
			fraction multipliedBy(fraction inFraction)const;
			fraction dividedBy(fraction inFraction)const;
			bool isEqualTo(fraction inFraction)const;
			void simplify();

			
};