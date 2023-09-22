#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int age;
    string name;

    // Prompt for user input
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    // Display user information
    cout << "Hello, " << name << "!" << endl;
    cout << "You are " << age << " years old." << endl;

    return 0;
}