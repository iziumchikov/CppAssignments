
#include "mystring.h"

using namespace std;

namespace cs_mystring {






	myString::myString() 
	{
    	myCString = new char[1];
    	strcpy(myCString, "");
    }







    myString::myString(const char *inCstring) 
    {
        myCString = new char[strlen(inCstring)+1];
        strcpy(myCString, inCstring);
    }






    myString::myString(const myString& inString) 
    {
        myCString = new char[strlen(inString.myCString)+1];
        strcpy(myCString, inString.myCString);
    }






    myString::~myString() 
    {
        delete [] myCString;
    }






    myString myString::operator= (const myString& inString) 
    {
        if (this != &inString) 
        {
            delete [] myCString;
            myCString = new char[strlen(inString.myCString)+1];
            strcpy(myCString, inString.myCString);
        }
        return *this;
    }







    ostream& operator<< (ostream& out, const myString& inString) 
    {
        return out << inString.myCString;
    }






    int myString::length() const 
    {
        return (strlen(myCString));
    }





   
       bool operator< (const myString& inLeft, const myString& inRight) {
        return (strcmp(inLeft.myCString,inRight.myCString) < 0);
    }






    bool operator<= (const myString& inLeft, const myString& inRight) {
        return (strcmp(inLeft.myCString,inRight.myCString) <= 0);
    }






    bool operator> (const myString& inLeft, const myString& inRight) {
        return (strcmp(inLeft.myCString,inRight.myCString) > 0);
    }






    bool operator>= (const myString& inLeft, const myString& inRight) {
        return (strcmp(inLeft.myCString,inRight.myCString) >= 0);
    }






    bool operator== (const myString& inLeft, const myString& inRight) {
        return (strcmp(inLeft.myCString,inRight.myCString) == 0);
    }






    bool operator!= (const myString& inLeft, const myString& inRight) {
        return (strcmp(inLeft.myCString,inRight.myCString) != 0);
    }
   
   
   
   
   
   
    char myString::operator[] (int index) const 
    {
        assert(index >= 0 && index < strlen(myCString));
        return myCString[index];
    }






    char& myString::operator[] (int index) 
    {
        assert(index >= 0 && index < strlen(myCString));
        return myCString[index];
    }

}//end namespace