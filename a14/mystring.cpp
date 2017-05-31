
#include "mystring.h"

using namespace std;

namespace cs_mystring {






	myString::myString() 
	{
    	myCString = new char[1];
    	strcpy(myCString, "");
    }







    myString::myString(const char *inCString) 
    {
        myCString = new char[strlen(inCString)+1];
        strcpy(myCString, inCString);
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







    istream& operator>> (istream& in, myString& inString) 
    {
        char buffer[128];
        in.width(128);
        in >> buffer;
        delete [] inString.myCString;
        inString.myCString = new char [strlen(buffer)+1];
        strcpy(inString.myCString, buffer);
        return in;
    }

	






    int myString::length() const 
    {
        return (strlen(myCString));
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
   
   
   
   
   
    
    
    
    
    
    
	void myString::read(istream& in, char delimiter)
	{
        char buffer[128];
        in.getline(buffer, 128, delimiter);
        delete [] myCString;
        myCString = new char [strlen(buffer)];
        strcpy(myCString, buffer);
    }
    
    
    
    
    
    


    myString operator+ (const myString& inLeft, const myString& inRight) 
    {
        char *str = new char [strlen(inLeft.myCString) + strlen(inRight.myCString) + 1];
        myString result = myString(str);
        strcpy(result.myCString, inLeft.myCString);
        strcat(result.myCString, inRight.myCString);
        return result;
    }
    
    
    
    
    
    



    myString myString::operator+= (const myString& inString) 
    {
        *this = *this + inString;
        return *this;
    }

}//end namespace
