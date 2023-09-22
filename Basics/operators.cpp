#include <iostream>
using namespace std;

int main() {
    // Arithmetic Operators
    int a = 10, b = 5;
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;
    int remainder = a % b;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;

    // Assignment Operators
    int x = 20;
    x += 5; // Equivalent to x = x + 5;
    cout << "x: " << x << endl;

    // Comparison Operators
    int num1 = 15, num2 = 25;
    bool isEqual = (num1 == num2);
    bool isNotEqual = (num1 != num2);
    bool isGreaterThan = (num1 > num2);
    bool isLessThan = (num1 < num2);

    cout << "Is Equal: " << isEqual << endl;
    cout << "Is Not Equal: " << isNotEqual << endl;
    cout << "Is Greater Than: " << isGreaterThan << endl;
    cout << "Is Less Than: " << isLessThan << endl;

    // Logical Operators
    bool isTrue = true, isFalse = false;
    bool andResult = isTrue && isFalse; // Logical AND
    bool orResult = isTrue || isFalse;  // Logical OR
    bool notResult = !isTrue;           // Logical NOT

    cout << "Logical AND: " << andResult << endl;
    cout << "Logical OR: " << orResult << endl;
    cout << "Logical NOT: " << notResult << endl;

    return 0;
}