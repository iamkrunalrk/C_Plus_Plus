#include <iostream>
using namespace std;

// Define a class called 'Person'
class Person {
public: // Public access modifier
    // Public data members (attributes)
    string name;
    int age;

    // Public member function to set name
    void setName(string newName) {
        name = newName;
    }

    // Public member function to get name
    string getName() {
        return name;
    }

private: // Private access modifier
    // Private data member (attribute)
    double salary;

public: // Public access modifier (can be mixed with private)
    // Constructor to initialize name, age, and salary
    Person(string n, int a, double s) : name(n), age(a), salary(s) {}

    // Public member function to display information
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }

    // Public member function to update salary (setter)
    void setSalary(double newSalary) {
        if (newSalary >= 0) {
            salary = newSalary;
        }
    }

    // Public member function to retrieve salary (getter)
    double getSalary() {
        return salary;
    }
};

int main() {
    // Create an object of the 'Person' class
    Person person("Alice", 30, 50000.0);

    // Access and modify public data members and call member functions
    person.age = 31; // Accessing 'age' directly (public)
    person.setName("Alice Smith"); // Calling 'setName' (public)
    person.setSalary(55000.0); // Calling 'setSalary' (public)

    // Access private data members using public member functions (encapsulation)
    cout << "Updated Name: " << person.getName() << endl; // Calling 'getName' (public)
    cout << "Updated Salary: " << person.getSalary() << endl; // Calling 'getSalary' (public)

    // Display information using the 'displayInfo' member function (public)
    cout << "Updated Person Information:" << endl;
    person.displayInfo();

    return 0;
}