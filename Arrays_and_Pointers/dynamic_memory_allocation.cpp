#include <iostream>
using namespace std;

int main() {
    // Dynamic memory allocation for an integer
    int* dynamicInt = new int; // Allocating memory for a single integer

    if (dynamicInt == nullptr) {
        cout << "Memory allocation failed." << endl;
        return 1; // Exit with an error code
    }

    // Assign a value to the dynamically allocated integer
    *dynamicInt = 42;

    // Display the value
    cout << "Dynamically allocated integer value: " << *dynamicInt << endl;

    // Release the dynamically allocated memory
    delete dynamicInt;

    // Dynamic memory allocation for an array of integers
    int* dynamicArray = new int[5]; // Allocating memory for an array of 5 integers

    if (dynamicArray == nullptr) {
        cout << "Memory allocation failed." << endl;
        return 1; // Exit with an error code
    }

    // Assign values to the elements of the dynamically allocated array
    for (int i = 0; i < 5; i++) {
        dynamicArray[i] = i * 10;
    }

    // Display the array elements
    cout << "Dynamically allocated integer array elements:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;

    // Release the dynamically allocated array
    delete[] dynamicArray;

    return 0;
}