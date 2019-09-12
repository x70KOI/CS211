/*
Name: Kristian Buan
WSU ID: K292D727
*/

#include <iostream>

int main()
{
	int inpFirst;
	int inpSecond;
	int inpOperation;

	// Prompting the user for input
	std::cout << "Enter the first integer: ";
	// Getting the user input
	std::cin >> inpFirst;
	std::cout << "Enter the second integer: ";
	std::cin >> inpSecond;

	std::cout << "The available operations are:\n";
	std::cout << "1. addition\n";
	std::cout << "2. subtraction\n";
	std::cout << "3. multiplication\n";
	std::cout << "Enter the number for your choice of operation: ";
	std::cin >> inpOperation;

	int math;
	if (inpOperation == 1) {
		// addition
		math = inpFirst + inpSecond;
		std::cout << inpFirst << " + " << inpSecond << " = " << math;
	}
	else if (inpOperation == 2) {
		// subtraction
		math = inpFirst - inpSecond;
		std::cout << inpFirst << " - " << inpSecond << " = " << math;
	}
	else if (inpOperation == 3) {
		// multiplication
		math = inpFirst * inpSecond;
		std::cout << inpFirst << " * " << inpSecond << " = " << math;
	}
	else {
		// If input operation was not 1 thru 3
		std::cout << inpOperation << " is an invalaid operation. Valid choices are 1 thru 3. Quitting. ";
	}
}

