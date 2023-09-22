#include <iostream>
using namespace std;

int main() {
    // Print even numbers from 1 to 10 using the continue statement
    for (int i = 1; i <= 10; i++) {
        if (i % 2 != 0) {
            continue; // Skip the current iteration if i is odd
        }
        cout << i << " ";
    }

    cout << endl;

    return 0;
}