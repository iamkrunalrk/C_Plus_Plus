#include <iostream>
using namespace std;

int main() {
    // Declare a variable and a pointer
    int number = 42;
    int* ptr = nullptr; // Initialize the pointer to nullptr

    // Assign the address of 'number' to the pointer
    ptr = &number;

    // Accessing the value and address using the pointer
    cout << "Value of 'number': " << number << endl;
    cout << "Address of 'number': " << &number << endl;
    cout << "Value using pointer: " << *ptr << endl; // Dereferencing the pointer
    cout << "Address stored in 'ptr': " << ptr << endl;

    // Modifying the value indirectly through the pointer
    *ptr = 99;
    cout << "Modified value of 'number': " << number << endl;

    return 0;
}