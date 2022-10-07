/*
Using Stringstream
- Include the Stringstream library.
- Use getline to get the string from the user
- Convert the string variable to a float variable using Stringstream
*/

#include <iostream>
#include <string>
#include <sstream>

int main()
{
	std::string stringLength;
	float inches = 0;
	float yardage = 0;

	std::cout << "Enter number of inches: ";
	std::getline(std::cin, stringLength);
	std::stringstream(stringLength) >> inches;
	std::cout << "You entered " << inches << "\n";
	yardage = inches / 36;
	std::cout << "Yardage is " << yardage;
	return 0;
}
