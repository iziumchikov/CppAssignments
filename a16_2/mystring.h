/*
* Class: CS 110B
* File Name: mystring.h

 Description:     Header file for class myString.


 Public Functions:
 
 myString();
 Precondition:    None.
 Postcondition:   An object of class myString has been created, which has a
                  c-string with only '\0'.



 myString(const char *inCString);
 Precondition:    inMString is input c-string.
 Postcondition:   Creates an object of class myString and contains inCString.




 myString(const myString& inString);
 Precondition:    inString is input myString object.
 Postcondition:   Creates an object of class myString and contains copy of
 				  inString.



 ~myString();
 Precondition:    None.
 Postcondition:   Deallocates memory of myCString object.



 myString operator= (const myString& inString);
 Precondition:    inString is input myString object
 Postcondition:   Deallocates variable memory for myCString and
 				  now myCString points to the copy of the inString.



 friend std::ostream& operator<< (std::ostream& out, const myString& inString);
 Precondition:    out is an ostream.
 				  inString is input myString object.
 Postcondition:   inString is sent to the ostream.



 friend std::istream& operator>> (std::istream& in, myString& inString);
 Precondition:    in is an istream.
 				  inString is input myString object.
 Postcondition:   The istream in reads up to 127 characters, ignoring any
                  leading whitespace, and stops at the first whitespace.
                  Deallocates variable memory for myCString and
 				  now myCString points to a new c-string from the buffer.



 long length() const;
 Precondition:    None.
 Postcondition:   Returns a length of myCString object.



 char operator[](int index) const;
 Precondition:    Calling object is a const myString object.
 Postcondition:   Returns the value of myCString[index].



 char& operator[](int index);
 Precondition:    Calling object is a myString object.
 Postcondition:   Returns a reference to myCString[index].



 friend bool operator< (const myString& inLeft, const myString& inRight);
 Precondition:    inLeft and inRight are input myString objects or c-strings.
 Postcondition:   Returns a boolean based on relationship between inLeft
                  and inRight. Returns true if strcmp is less than 0,
                  else false.



 friend bool operator<= (const myString& inLeft, const myString& inRight);
 Precondition:    inLeft and inRight are input myString objects or c-strings.
 Postcondition:   Returns a boolean based on relationship between inLeft
                  and inRight. Returns true if strcmp is less than or equal to 0,
                  else false.



 friend bool operator> (const myString& inLeft, const myString& inRight);
 Precondition:    inLeft and inRight are input myString objects or c-strings.
 Postcondition:   Returns a boolean based on relationship between inLeft
                  and inRight. Returns true if strcmp is greater than 0, else false.



 friend bool operator>= (const myString& inLeft, const myString& inRight);
 Precondition:    inLeft and inRight are input myString objects or c-strings.
 Postcondition:   Returns a boolean based on relationship between inLeft
                  and inRight. Returns true if strcmp is greater than or equal to 0,
                  else false.



 friend bool operator== (const myString& inLeft, const myString& inRight);
 Precondition:    inLeft and inRight are input myString objects or c-strings.
 Postcondition:   Returns a boolean representing the relationship between left
                  and right. Returns true if strcmp is 0, else false.



 friend bool operator!= (const myString& inLeft, const myString& inRight);
 Precondition:    inLeft and inRight are input myString objects or c-strings.
 Postcondition:   Returns a boolean representing the relationship between left
                  and right. Returns true if strcmp is not 0, else false.



 void read(std::istream& in, char delimiter);
 Precondition:    in is an istream.
 				  delimiter is the character that will be the delimiting char
 				  for extraction.
 Postcondition:   The istream, in, will read up to 127 characters, including any
                  leading whitespace, and stop as the first occurence of the
                  char, delim. Deallocates variable memory for myCString and
 				  now myCString points to a new c-string from the buffer.


 friend myString operator+ (const myString& inLeft, const myString& inRight);
 Precondition:    inLeft and inRight are myString objects or c-strings.
 Postcondition:   Returns a new myString object, that contains
                  concatenation of inLeft and inRight.


 myString operator+= (const myString& inString);
 Precondition:    inString is a myString object or a c-string.
 Postcondition:   myCString is assigned the value of the concatenation of 
                  inString.myCString and myCString.
 */

#include <iostream>
#include <cstring>
#include <cassert>

namespace cs_mystring {
	
	class myString {
	
		private: 
			char *myCString;
			
		public: 
			myString();
      		myString(const char *inCString);
      		myString(const myString& inString);
      		~myString();
      		myString operator= (const myString& inString);		
      		friend std::ostream& operator<< (std::ostream& out, const myString& inString);
      		friend std::istream& operator>> (std::istream& in, myString& inString);
      		int length() const;
      		char operator[](int index) const;
      		char& operator[](int index);
      		friend bool operator< (const myString& inLeft, const myString& inRight);
      		friend bool operator<= (const myString& inLeft, const myString& inRight);
      		friend bool operator> (const myString& inLeft, const myString& inRight);
      		friend bool operator>= (const myString& inLeft, const myString& inRight);
      		friend bool operator== (const myString& inLeft, const myString& inRight);
      		friend bool operator!= (const myString& inLeft, const myString& inRight);
      		void read(std::istream& in, char delimiter);
      		friend myString operator+ (const myString& inLeft, const myString& inRight);
      		myString operator+= (const myString& inString);
      		
	};//end class
}//end namespace



/* OUTPUT SAMPLE 
----- Testing basic String creation & printing
string [0] = Wow
string [1] = C++ is neat!
string [2] = 
string [3] = a-z

----- Now reading myStrings from file

----- first, word by word
Read string = The
Read string = first
Read string = time
Read string = we
Read string = will
Read string = read
Read string = individual
Read string = words,
Read string = next
Read string = we
Read string = read
Read string = whole
Read string = lines

----- now, line by line
Read string = The  first  time  we  will
Read string =     read individual words, next    
Read string = we read whole lines

----- Testing access to characters (using const)
Whole string is abcdefghijklmnopqsrtuvwxyz
now char by char: abcdefghijklmnopqsrtuvwxyz
----- Testing access to characters (using non-const)
Start with abcdefghijklmnopqsrtuvwxyz and convert to ABCDEFGHIJKLMNOPQSRTUVWXYZ

----- Testing relational operators between myStrings
Comparing app to apple
	Is left < right? true
	Is left <= right? true
	Is left > right? false
	Is left >= right? false
	Does left == right? false
	Does left != right ? true
Comparing apple to 
	Is left < right? false
	Is left <= right? false
	Is left > right? true
	Is left >= right? true
	Does left == right? false
	Does left != right ? true
Comparing  to Banana
	Is left < right? true
	Is left <= right? true
	Is left > right? false
	Is left >= right? false
	Does left == right? false
	Does left != right ? true
Comparing Banana to Banana
	Is left < right? false
	Is left <= right? true
	Is left > right? false
	Is left >= right? true
	Does left == right? true
	Does left != right ? false

----- Testing relations between myStrings and char *
Comparing he to hello
	Is left < right? true
	Is left <= right? true
	Is left > right? false
	Is left >= right? false
	Does left == right? false
	Does left != right ? true
Comparing why to wackity
	Is left < right? false
	Is left <= right? false
	Is left > right? true
	Is left >= right? true
	Does left == right? false
	Does left != right ? true

----- Testing concatentation on myStrings
outrageous + milk = outrageousmilk
milk +  = milk
 + cow = cow
cow + bell = cowbell

----- Testing concatentation between myString and char *
abcde + XYZ = abcdeXYZ
XYZ + abcde = XYZabcde

----- Testing shorthand concat/assign on myStrings
who += what = whowhatandwhowhat
what += WHEN = whatWHENandwhatWHEN
WHEN += Where = WHENWhereandWHENWhere
Where += why = WherewhyandWherewhy

----- Testing shorthand concat/assign using char *
I love  += programming = I love programming

----- Testing copy constructor and operator= on myStrings
original is cake, copy is fake
original is cake, copy is fake
after self assignment, copy is Copy Cat
Testing pass & return myStrings by value and ref
after calling Append, sum is BinkyBoo
val is winky
after assign,  val is BinkyBoo
*/
