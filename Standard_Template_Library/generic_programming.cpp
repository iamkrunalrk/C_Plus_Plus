#include <iostream>
using namespace std;

// Function template for finding the maximum of two values
template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Using the findMax function with different data types
    int intResult = findMax(10, 20);
    double doubleResult = findMax(3.14, 2.71);
    char charResult = findMax('A', 'B');

    cout << "Maximum of 10 and 20: " << intResult << endl;
    cout << "Maximum of 3.14 and 2.71: " << doubleResult << endl;
    cout << "Maximum of 'A' and 'B': " << charResult << endl;

    return 0;
}