#include <iostream>
using namespace std;

// Function to divide two integers and throw an exception if the denominator is zero
double divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw "Division by zero is not allowed.";
    }
    return static_cast<double>(numerator) / denominator;
}

int main() {
    int numerator, denominator;
    double result;

    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;

    try {
        result = divide(numerator, denominator);
        cout << "Result of division: " << result << endl;
    } catch (const char* errorMessage) {
        cout << "Error: " << errorMessage << endl;
    }

    return 0;
}