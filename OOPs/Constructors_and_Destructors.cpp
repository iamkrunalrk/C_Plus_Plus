#include <iostream>
using namespace std;

// Define a class called 'Student'
class Student {
public:
    // Constructor with parameters
    Student(string name, int age) {
        this->name = name;
        this->age = age;
        cout << "Constructor called for " << name << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }

    // Member function to display student information
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

private:
    string name;
    int age;
};

int main() {
    // Create objects of the 'Student' class using constructors
    Student student1("Alice", 20);
    Student student2("Bob", 22);

    // Display information for the students
    cout << "Student 1 Information:" << endl;
    student1.displayInfo();

    cout << "\nStudent 2 Information:" << endl;
    student2.displayInfo();

    // Objects go out of scope and destructors are called automatically

    return 0;
}