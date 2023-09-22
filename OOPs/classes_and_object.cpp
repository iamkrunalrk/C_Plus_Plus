#include <iostream>
using namespace std;

// Define a class called 'Car'
class Car {
public:
    // Public member variables (attributes)
    string make;
    string model;
    int year;

    // Public member function (method) to display car information
    void displayInfo() {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    // Create objects of the 'Car' class
    Car car1; // Object 1
    Car car2; // Object 2

    // Set attributes for car1
    car1.make = "Toyota";
    car1.model = "Camry";
    car1.year = 2020;

    // Set attributes for car2
    car2.make = "Honda";
    car2.model = "Civic";
    car2.year = 2021;

    // Display information for car1 and car2
    cout << "Car 1 Information:" << endl;
    car1.displayInfo();

    cout << "\nCar 2 Information:" << endl;
    car2.displayInfo();

    return 0;
}