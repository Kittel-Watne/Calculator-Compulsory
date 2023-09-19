#include <iostream>
#include "Header.h"
/// <summary>
/// Main function, operates as a calculator which can find a factorial, solve simple polynomial equations and solve simple math equations.
/// </summary>
/// <returns>0</returns>
int main() {
	bool running = true;
	int factorialParameter;
	bool polynomialCalculator;
	bool basicCalculator;
	//This while loop contains the entire program. It allows for exiting the calculator
	while (running) {
		//This is the main menu for the calculator using a switch-case

		std::cout << "Select an option: \n1. Find a factorial \n2. Polynomial equations \n3. Simple math equations \n4. End the simulation\n";
		int bigChoice = GetInteger();
		switch (bigChoice) {
		//Factorial option
		case(1):
			std::cout << "Write the number you want to find the factorial of:\n";
			do{
				factorialParameter = GetInteger();
			} 
			while (factorialParameter < 0);
			
			std::cout << Factorial(factorialParameter) << "\n";
			break;
		//Polynomialcalculator
		case(2):
			polynomialCalculator = true;
			//A new while loop for the polynomialcalculator allowing for staying in the calculator after using one of its functions without having to re-enter
			while (polynomialCalculator) {
				std::cout << "Select an operation: \n1. Add up two polynomialfunctions\n2. Subtract between polynomialfunctions\n3. Multiply 2 polynomialfunctions\n4. Find the derivative of a polynomialfunction\n5. Exit polynomial Calculator\n";
				int polynomialChoice = GetInteger();
				switch (polynomialChoice) {
				//addition
				case(1):
					polyAddition();
					break;
				//subtraction
				case(2):
					polySubtraction();
					break;
				//multiplication
				case(3):
					polyMultiply();
					break;
				//derivation
				case(4):
					polyDerive();
					break;
				//exits the polynomialcalculator
				case(5):
					polynomialCalculator = false;
					break;
				//errorhandling for polynomial menu
				default:
					std::cout << "Please write a valid number (1-5)\n";
					break;
				}
			}
			break;
		//While loop for the basic calculator
		case(3):
			basicCalculator = true;
			while (basicCalculator) {
				std::cout << "Select an operation: \n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit basic Calculator\n (Basic calculator only accepts whole numbers for the equations)\n";
				int basicChoice = GetInteger();
				switch (basicChoice) {
				//addition
				case(1):
					std::cout << "Write your numbers to add, one at a time:\n";
					std::cout << addition() << "\n";

					break;
				//subtraction
				case(2):
					std::cout << "Write the number you want to subtract from, then the number to subtract:\n";
					std::cout << subtraction() << "\n";
					
					break;
				//multiplication
				case(3):
					std::cout << "Write your numbers to multiply, one at a time:\n";
					std::cout << multiplication() << "\n";

					break;
				//division
				case(4):
					std::cout << "Write your dividend first, then your divisor\n";
					std::cout << division() << "\n";

					break;
				//exit basic calculatpr
				case(5):
					basicCalculator = false;
					break;
				//errorhandling for basic calculator menu
				default:
					std::cout << "Please write a valid number (1-5)\n";
					break;
				}
			}
			break;
		case(4):
			//Ends the program
			running = false;
			break;
		//errorhandling for main menu
		default:
			std::cout << "Please write a valid number (1-4)\n";
			break;
		}
	}
	return 0;
}