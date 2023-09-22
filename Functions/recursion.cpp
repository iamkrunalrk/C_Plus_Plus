#include <iostream>
using namespace std;

// Recursive function to calculate the factorial of a number
unsigned long long factorial(int n);

int main() {
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is undefined for negative numbers." << endl;
    } else {
        unsigned long long result = factorial(num);
        cout << "Factorial of " << num << " is: " << result << endl;
    }

    return 0;
}

// Recursive function definition for calculating factorial
unsigned long long factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0) {
        return 1;
    }

    // Recursive case: factorial(n) = n * factorial(n-1)
    return static_cast<unsigned long long>(n) * factorial(n - 1);
}
