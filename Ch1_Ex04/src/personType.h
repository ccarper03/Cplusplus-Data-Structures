//************************************************************
// Author: D.S. Malik
//
// Chapter 1: Programming Exercise 4
// Person Type Header File
//************************************************************

#include <string>

using namespace std;

class personType
{
public:
    void print() const;
      //Function to output the first name , middle name and last name
      //in the form firstName middleName lastName.

    void setName(string first, string middle, string last);
      //Function to set firstName and lastName according to the
      //parameters.
      //Postcondition: firstName = first; lastName = last

    string getFirstName() const;
      //Function to return the first name.
      //Postcondition: The value of firstName is returned.

    string getMiddleName() const;
          //Function to return the first name.
          //Postcondition: The value of firstName is returned.

    string getLastName() const;
      //Function to return the last name.
      //Postcondition: The value of lastName is returned.

    personType();
      //Default constructor
      //Sets firstName and lastName to null strings.
      //Postcondition: firstName = ""; middle = ""; lastName = "";

    personType(string first, string middle, string last);
      //Constructor with parameters.
      //Sets firstName and lastName according to the parameters.
      //Postcondition: firstName = first; lastName = last;

private:
    string firstName; //variable to store the first name
    string middleName;//variable to store the middle name
    string lastName;  //variable to store the last name
};
