//*******************************************************
// Author: D.S. Malik
//
// Chapter 1: Programming Exercise 1
// Roman Number Header file
//*******************************************************  
 
#include <string>
using namespace std;

class romanType
{
public:
    	void setRoman(string);
	// Function to set the Roman numeral according to the 	// parameter
	// Postcondition: romanNum = rString
	// Calls romanToDecimal function

    	void romanToDecimal();
	// Funxtion to convert Roman numeral to a decimal number
	// Postcondition: decimalNum = sum

    	void printDecimal() const;
	// Function to output the decimal number in the form of 	// decimalNum

    	void printRoman() const;
	// Function to output the Roman numeralin the form of 	// romanNumNum

    	romanType();
	// Default constructor
	// Sets Roman number to 'I' and decimal number to 1
	// Postcondition: romanNum = 'I'; decimalNum = 1

    	romanType(string);
	// Constructor with parameter
	// Sets roman number according to parameter
	// Postcondition: romanNum = rString
	// Calls romanToDecimal function

private:
    	string romanNum;	// Variable to store Roman numeral
    	int decimalNum;		// Variable to store decimal number
};