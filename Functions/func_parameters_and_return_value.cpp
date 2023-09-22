#include <iostream>
using namespace std;

// Function declaration with parameters
int add(int a, int b);

// Function declaration with a parameter and return value
double calculateCircleArea(double radius);

int main() {
    int num1 = 5, num2 = 7;

    // Function call with parameters
    int sum = add(num1, num2);

    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    double radius = 3.0;

    // Function call with a parameter and return value
    double area = calculateCircleArea(radius);

    cout << "The area of the circle with radius " << radius << " is: " << area << endl;

    return 0;
}

// Function definition with parameters
int add(int a, int b) {
    int result = a + b;
    return result;
}

// Function definition with a parameter and return value
double calculateCircleArea(double radius) {
    double area = 3.14159265359 * radius * radius;
    return area;
}