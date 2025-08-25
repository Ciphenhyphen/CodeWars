#include <iostream>
#include <string>



int main() 
{
	int number = 98; // Convert this to a string
					 // If the number's are >= 0 and <= 9, multiply number by each index
	

	int sqr_digit = 0;
	std::string str = std::to_string(number); // Int to String
											  // Get every Character
	std::string str_digit = " ";
	for (char c : str) {					  // Avoid multiplying by int value
	int char_Num =  c - '0';			  // Multiply by what char value is represented
	int sqr = char_Num * char_Num;
	std::string digit_string = std::to_string(sqr);
	str_digit.append(digit_string);
	
	}
	int new_Int = stoi(str_digit);
	

	 // Stringstream the string 
	return new_Int;
}
// CODEWAR QUESTION: square each digit of an int
// IMPORTANT: NO STOI, It will not run that, catch's and stops the program
// - '0' on a char value will return the char's number as an int
// store the char's number as an int into an int
// Square that char's number
// You don't need to add each others value
// Just store each square's int into an int, pile them up than sum them
// SUGGESTION: concatenate each squared int into the int value 
// Square the char int -> return number to char (or string) -> concatenate next value to sqr_digit