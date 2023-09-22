#include <iostream>
#include <exception>
using namespace std;

// Custom exception class for division by zero
class DivisionByZeroException : public exception {
public:
    const char* what() const noexcept override {
        return "Division by zero is not allowed.";
    }
};

// Function to divide two integers and throw a custom exception if the denominator is zero
double divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw DivisionByZeroException();
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
    } catch (const DivisionByZeroException& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
