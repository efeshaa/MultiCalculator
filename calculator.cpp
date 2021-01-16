#include<iostream>
using namespace std;

/*
*	Normal Calculator
*	Just like normal (basic) calculator
* 
*	Function:
*		1. Addition(+)
*		2. Subtraction(-)
*		3. Multiplication(*)
*		4. Division(/)
*/
float normalCalculator(float num1, float num2, char op)
{
	float result;

	// calculate result based of user selected operator
	if (op == '/') {
		result = num1 / num2;
	}
	else if (op == '*') {
		result = num1 * num2;
	}
	else if (op == '+') {
		result = num1 + num2;
	}
	else if (op == '-') {
		result = num1 - num2;
	} else { return 0; }

	//return calculated result
	return result;
}

/*
*	Weight calculator 
*	used for convert weight from one unit to another
*
*	unit code (use int):
*		1. kg(s) -> lb(s)
*		2. lg(s) -> kg(s)
*	*still on development (only two for now)
*/
float weightCalculator(float weight, int unit)
{
	float result;
	
	// Calculate converted weight(see documentation above for the code)
	if (unit == 1) {
		result = weight * 2.20462;
	}
	else if (unit == 2) {
		result = weight * 0.453592;
	} else { return 0; }
	
}

int main()
{
	int mode; // mode 1 for normal calculator and mode 2 for weight converter (for now)

	std::cout << "Select your mode:\n1. Normal Calculator\n2. Weight Converter\nEnter your mode: ";
	std::cin >> mode;

	if (mode == 1) {

		float num1, num2;
		char op;

		std::cout << "Enter your first number: ";
		std::cin >> num1;
		std::cout << "Enter your operator (/, *, +, -): ";
		std::cin >> op;
		std::cout << "Enter your second number: ";
		std::cin >> num2;

		std::cout << normalCalculator(num1, num2, op);
	}
	else if (mode == 2) {
		
		float weight;
		int unit;

		std::cout << "Select your mode:\n1. kg(s) -> lb(s)\n2. lb(s) -> kg(s)\nEnter your mode: ";
		std::cin >> unit;
		std::cout << "Enter your weight: ";
		std::cin >> weight;

		std::cout << weightCalculator(weight, unit);
	}

	return 0;
}
