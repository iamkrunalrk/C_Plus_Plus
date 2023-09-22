#include <iostream>
using namespace std;

int main() {
    int num;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> num;

    // Check if the number is positive, negative, or zero
    if (num > 0) {
        cout << "The number is positive." << endl;
    } else if (num < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    return 0;
}