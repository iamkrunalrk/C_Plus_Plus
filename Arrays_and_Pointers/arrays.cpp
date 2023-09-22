#include <iostream>
using namespace std;

int main() {
    // Declaring and initializing an integer array
    int numbers[5] = {10, 20, 30, 40, 50};

    // Accessing and displaying elements of the array
    cout << "Elements of the integer array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << ": " << numbers[i] << endl;
    }

    // Declaring and initializing a string array
    string fruits[] = {"Apple", "Banana", "Cherry", "Date", "Fig"};

    // Accessing and displaying elements of the string array
    cout << "\nElements of the string array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << ": " << fruits[i] << endl;
    }

    return 0;
}