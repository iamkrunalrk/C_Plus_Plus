#include <iostream>
using namespace std;

int main() {
    char grade;

    // Prompt the user to enter a grade
    cout << "Enter your grade (A, B, C, D, or F): ";
    cin >> grade;

    // Evaluate the grade using a switch statement
    switch (grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Good job!" << endl;
            break;
        case 'C':
            cout << "Satisfactory." << endl;
            break;
        case 'D':
            cout << "Needs improvement." << endl;
            break;
        case 'F':
            cout << "Failed." << endl;
            break;
        default:
            cout << "Invalid grade." << endl;
    }

    return 0;
}