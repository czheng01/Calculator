#include <iostream>
#include <string>

using namespace std;

double add(double numone, double numtwo);
double subtract(double numone, double numtwo);
double multiply(double numone, double numtwo);
double divide(double numone, double numtwo);
double power(double numone, double numtwo);

int main() {

	cout << "First number?" << endl;
	double numone;
	cin >> numone;

	cout << "Operation?" << endl;
	char operation;
	cin >> operation;

	cout << "Second number?" << endl;
	double numtwo;
	cin >> numtwo;

	if (operation == '+') {
		cout << add(numone, numtwo) << endl;
	}

	else if (operation == '-') {
		cout << subtract(numone, numtwo) << endl;
	}

	else if (operation == '*') {
		cout << multiply(numone, numtwo) << endl;
	}

	else if (operation == '/' ) {
		cout << divide(numone, numtwo) << endl;
	}

	else if (operation == '^') {
		cout << power(numone, numtwo) << endl;
	}

}

double add(double numone, double numtwo) {
	double sum = numone + numtwo;
	return sum;

}

double subtract(double numone, double numtwo) {
	double difference = numone - numtwo;
	return difference;

}

double multiply(double numone, double numtwo) {
	double product = numone*numtwo;
	return product;

}

double divide(double numone, double numtwo) {
	double quotient = numone / numtwo;
	return quotient;

}

double power(double numone, double numtwo) {
	double output = numone;
	for (int i = 0; i < numtwo - 1; i++) {
		output = output*numone;
	}
	return output;

}