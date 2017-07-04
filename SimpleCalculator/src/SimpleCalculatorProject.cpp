//============================================================================
// Name        : SimpleCppProject.cpp
// Author      : Dillon Ecklund
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

double doSomeMath(double num1, char operation, double num2);

int main() {

	double num1 = 0.0;
	char operation;
	double num2 = 0.0;
	double total = 0.0;



		// Prompt user for information
		cout << "Please enter your first number: " << endl;
		cin >> num1;

		cout << "Please enter the operation you wish to do: " << endl;
		cin >> operation;

		cout << "Please enter your second number: " << endl;
		cin >> num2;

		// Doing the math
		total = doSomeMath(num1, operation, num2);

		// Display the total
		cout << "The answer to your math problem is: " << total << endl;

	return 0;
}

double doSomeMath(double num1, char operation, double num2){

	double total = 0.0;

	switch(operation){
		case '+':
			total = num1 + num2;
			break;
		case '-':
			total = num1 - num2;
			break;
		case '*':
			total = num1 * num2;
			break;
		case '/':
			total = num1 / num2;
			break;
		default:
			cout << "Not a valid argument...";
			break;
	}

	return total;
}
