#include <iostream>
using namespace std;

int main() {
    int count = 1;

    // Print even numbers from 2 to 10 using a while loop
    while (count <= 10) {
        cout << count << " ";
        count += 2; // Increment by 2 to get even numbers
    }

    cout << endl;

    return 0;
}