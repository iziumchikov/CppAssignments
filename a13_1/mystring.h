#include <iostream>
#include <cstring>
#include <cassert>

namespace cs_mystring {
	
	class myString {
	
		private: 
			char *myCString;
			
		public: 
			// default constructor
			myString();
			
			// create a MyString from a C string
      		myString(const char *inCstring);
      		
      		// create a MyString from a copy of another string
      		myString(const myString& inString);
      		
      		// destructor		
      		~myString();
      		
      		//Assignment operator
      		myString operator= (const myString& inString);		
      		
      		friend std::ostream& operator<< (std::ostream& out, const myString& inString);
      		
      		int length() const;
      		
      		char operator[](int index) const;
      		char& operator[](int index);
      		
      		friend bool operator< (const myString& inLeft, const myString& inRight);
      		friend bool operator<= (const myString& inLeft, const myString& inRight);
      		friend bool operator> (const myString& inLeft, const myString& inRight);
      		friend bool operator>= (const myString& inLeft, const myString& inRight);
      		friend bool operator== (const myString& inLeft, const myString& inRight);
      		friend bool operator!= (const myString& inLeft, const myString& inRight);
	};//end class
}//end namespace