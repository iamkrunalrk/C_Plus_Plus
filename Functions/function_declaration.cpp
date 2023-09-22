#include <iostream>
using namespace std;

// Function declaration (prototype)
int add(int a, int b);

int main() {
    int num1 = 5, num2 = 7;

    // Function call
    int result = add(num1, num2);

    cout << "The sum of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}

// Function definition
int add(int a, int b) {
    int sum = a + b;
    return sum;
}