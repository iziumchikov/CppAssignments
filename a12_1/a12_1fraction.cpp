#include "fraction.h"

namespace cs_fraction {

    using namespace std;






    fraction::fraction(int inNumerator, int inDenominator) {
        assert(inDenominator != 0);
        numerator = inNumerator;
        denominator = inDenominator;
        this->simplify();
    }
    
    
    
    
    
    ostream& operator<< (ostream& out, const fraction& inFraction) {
    
    	if (abs(inFraction.numerator) >= abs(inFraction.denominator)) {
    		out << inFraction.numerator / inFraction.denominator;
    		
    		if (inFraction.numerator % inFraction.denominator != 0) {
    			out << "+" << abs(inFraction.numerator % inFraction.denominator) << "/" << 
    														inFraction.denominator;
    		}
		}
		
	    else if (inFraction.numerator == 0) {
    		out << 0;
    	}
    	
    	else {
    		out << inFraction.numerator << "/" << inFraction.denominator;
    	}
    	
    	return out;
    }
    
    
    
    
    
	

//Takes user input of mixed numbers, negative numbers, whole numbers or fractions
//and stores them in fraction f.
    istream& operator>> (istream& in, fraction& inFraction)
    {
        int temp;
        in >> temp;
        if (in.peek() == '+') {
        
            in.ignore();
            in >> inFraction.numerator;
            in.ignore();
            in >> inFraction.denominator;
            
            if(temp < 0) {
            
                temp *= -1;
                inFraction.numerator += temp * inFraction.denominator;
                inFraction.numerator *= -1;
            }
            
            else {
            
                inFraction.numerator += temp * inFraction.denominator;
            }
        }
        else if (in.peek() == '/') {
        
            in.ignore();
            in >> inFraction.denominator;
            inFraction.numerator = temp;
        }
        else {
        
            inFraction.numerator = temp;
            inFraction.denominator = 1;
        }

        inFraction.simplify();
        return in;
    }
	
	
	
	
	
	
	
	
	bool operator< (const fraction& inLeft, const fraction& inRight) {
	
        return (inLeft.numerator * inRight.denominator < inRight.numerator * inLeft.denominator);
    }
    
    
    
    
    
    
    bool operator<= (const fraction& inLeft, const fraction& inRight) {
    
        return (inLeft.numerator * inRight.denominator <= inRight.numerator * inLeft.denominator);
    }
    
    
    
    
    
    
    bool operator> (const fraction& inLeft, const fraction& inRight) {
    
        return (inLeft.numerator * inRight.denominator > inRight.numerator * inLeft.denominator);
    }






    bool operator>= (const fraction& inLeft, const fraction& inRight) {
    
        return (inLeft.numerator * inRight.denominator >= inRight.numerator * inLeft.denominator);
    }






    bool operator== (const fraction& inLeft, const fraction& inRight) {
    
        return (inLeft.numerator * inRight.denominator == inRight.numerator * inLeft.denominator);
    }






    bool operator!= (const fraction& inLeft, const fraction& inRight) {
    
        return (inLeft.numerator * inRight.denominator != inRight.numerator * inLeft.denominator);
    }
    
    
    
    
    
       
    fraction operator+ (const fraction& inLeft, const fraction& inRight) {
    
    	fraction result(inLeft.numerator * inRight.denominator + 
    					inRight.numerator * inLeft.denominator,
                        inLeft.denominator * inRight.denominator );
        return result;
    }






    fraction operator- (const fraction& inLeft, const fraction& inRight) {
    
        fraction result(inLeft.numerator * inRight.denominator -
                        inRight.numerator * inLeft.denominator,
                        inLeft.denominator * inRight.denominator);
        return result;
    }






    fraction operator* (const fraction& inLeft, const fraction& inRight) {
    
        fraction result(inLeft.numerator * inRight.numerator,
                        inLeft.denominator * inRight.denominator);
        return result;
    }






    fraction operator/ (const fraction& inLeft, const fraction& inRight) {
    
        fraction result(inLeft.numerator * inRight.denominator,
                        inLeft.denominator * inRight.numerator);
        return result;
    }
    
    
    
    
    
       
    fraction fraction::operator+=(const fraction &inFraction) {
    
        *this = *this + inFraction;
        return *this;
    }





    fraction fraction::operator-=(const fraction &inFraction) {
    
        *this = *this - inFraction;
        return *this;
    }





    fraction fraction::operator*=(const fraction &inFraction) {
    
        *this = *this * inFraction;
        return *this;
    }





    fraction fraction::operator/=(const fraction &inFraction) {
    
        *this = *this / inFraction;
        return *this;
    }
    
    
    
    
    
      
    fraction fraction::operator++ () {
    
        numerator += denominator;
        return *this;
    }






    fraction fraction::operator++ (int) {
    
        fraction temp(numerator, denominator);
        numerator += denominator;
        return temp;
    }







    fraction fraction::operator-- () {
    
        numerator -= denominator;
        return *this;
    }
    
    
    
    
    
  

    fraction fraction::operator-- (int) {
    
        fraction temp(numerator, denominator);
        numerator -= denominator;
        return temp;
    }
    
    
    
    
    
    void fraction::simplify() {
    
        for (int i = denominator; i > 1; i--) {

            if ((numerator % i == 0) && (denominator % i == 0)) {
            
                numerator = numerator / i;
                denominator = denominator / i;
            }
        }
        if(denominator < 0) {
        
            denominator *= -1;
            numerator *= -1;
        }
    }
}