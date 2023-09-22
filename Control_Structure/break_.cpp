#include <iostream>
using namespace std;

int main() {
    // Print numbers from 1 to 10 but stop when reaching 5
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            cout << "Breaking the loop at 5." << endl;
            break; // Exit the loop when i equals 5
        }
        cout << i << " ";
    }

    cout << endl;

    return 0;
}