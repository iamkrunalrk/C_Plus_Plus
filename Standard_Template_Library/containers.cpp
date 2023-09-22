#include <iostream>
#include <vector>
#include <list>
#include <map>
using namespace std;

int main() {
    // ------------------ Vector ------------------
    cout << "Vector:" << endl;
    vector<int> numbers; // Declare a vector of integers

    // Add elements to the vector
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Access elements using indexing
    cout << "Vector Elements: ";
    for (size_t i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // ------------------ List ------------------
    cout << "\nList:" << endl;
    list<string> names; // Declare a list of strings

    // Add elements to the list
    names.push_back("Alice");
    names.push_back("Bob");
    names.push_back("Charlie");

    // Iterate through the list
    cout << "List Elements: ";
    for (const string& name : names) {
        cout << name << " ";
    }
    cout << endl;

    // ------------------ Map ------------------
    cout << "\nMap:" << endl;
    map<string, int> scores; // Declare a map with string keys and integer values

    // Add key-value pairs to the map
    scores["Alice"] = 95;
    scores["Bob"] = 88;
    scores["Charlie"] = 92;

    // Access values by key
    cout << "Map Elements:" << endl;
    for (const auto& pair : scores) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }

    return 0;
}