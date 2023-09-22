#include <iostream>
using namespace std;

int main() {
    // Constants
    const int maxAttempts = 3;
    const double pi = 3.14159265359;

    // Display constants
    cout << "Maximum Attempts Allowed: " << maxAttempts << endl;
    cout << "Value of Pi: " << pi << endl;

    // Integer literals
    int numberOfApples = 5;
    int numberOfBananas = 10;

    // Arithmetic operation with literals
    int totalFruits = numberOfApples + numberOfBananas;

    cout << "Total number of fruits: " << totalFruits << endl;

    // Floating-point literals
    double temperature = 25.5;
    double price = 19.99;

    cout << "Current Temperature: " << temperature << " degrees Celsius" << endl;
    cout << "Product Price: $" << price << endl;

    // Character and string literals
    char grade = 'A';
    const char* greeting = "Hello, World!";

    cout << "Student's Grade: " << grade << endl;
    cout << "Greeting Message: " << greeting << endl;

    return 0;
}