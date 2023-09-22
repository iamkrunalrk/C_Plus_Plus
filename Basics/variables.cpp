#include <iostream>
using namespace std;

int main() {
    // Declare and initialize variables
    int integerVar = 42;
    float floatVar = 3.14;
    char charVar = 'A';
    bool boolVar = true;

    // Display the values of variables
    cout << "Integer Variable: " << integerVar << endl;
    cout << "Float Variable: " << floatVar << endl;
    cout << "Character Variable: " << charVar << endl;
    cout << "Boolean Variable: " << boolVar << endl;

    // Performing operations
    int sum = integerVar + 10;
    float product = floatVar * 2.0;

    cout << "Sum of integerVar and 10: " << sum << endl;
    cout << "Product of floatVar and 2.0: " << product << endl;

    return 0;
}