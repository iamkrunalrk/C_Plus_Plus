#include <iostream>
using namespace std;

// Function overloading: two functions with the same name but different parameter lists
int add(int a, int b);
double add(double a, double b);

int main() {
    int num1 = 5, num2 = 7;
    double num3 = 3.5, num4 = 2.5;

    // Call the int version of the add function
    int sum1 = add(num1, num2);
    cout << "Sum of integers: " << sum1 << endl;

    // Call the double version of the add function
    double sum2 = add(num3, num4);
    cout << "Sum of doubles: " << sum2 << endl;

    return 0;
}

// Function definition for adding integers
int add(int a, int b) {
    return a + b;
}

// Function definition for adding doubles
double add(double a, double b) {
    return a + b;
}