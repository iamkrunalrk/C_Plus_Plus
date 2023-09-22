#include <iostream>
using namespace std;

int main() {
    int n;

    // Prompt the user for a positive number using a do-while loop
    do {
        cout << "Enter a positive number: ";
        cin >> n;
    } while (n <= 0);

    cout << "You entered: " << n << endl;

    return 0;
}