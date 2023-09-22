#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declare and initialize a vector of integers
    vector<int> numbers = {10, 20, 30, 40, 50};

    // Declare an iterator for the vector
    vector<int>::iterator it;

    // Print the elements of the vector using an iterator
    cout << "Vector Elements (using iterator): ";
    for (it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Modify an element using an iterator
    it = numbers.begin() + 2; // Point to the third element (30)
    *it = 99; // Modify the element

    // Print the modified vector
    cout << "Modified Vector Elements: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}