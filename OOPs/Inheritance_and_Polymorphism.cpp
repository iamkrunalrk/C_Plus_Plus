#include <iostream>
using namespace std;

// Base class 'Shape'
class Shape {
public:
    // Virtual function to calculate area (to be overridden by derived classes)
    virtual double calculateArea() {
        return 0.0;
    }

    // Virtual function to display shape information
    virtual void displayInfo() {
        cout << "Shape: Unknown" << endl;
    }
};

// Derived class 'Rectangle' inheriting from 'Shape'
class Rectangle : public Shape {
public:
    double length;
    double width;

    // Constructor to initialize length and width
    Rectangle(double len, double wid) : length(len), width(wid) {}

    // Override calculateArea() method to calculate the area of a rectangle
    double calculateArea() override {
        return length * width;
    }

    // Override displayInfo() method to display rectangle information
    void displayInfo() override {
        cout << "Shape: Rectangle" << endl;
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

// Derived class 'Circle' inheriting from 'Shape'
class Circle : public Shape {
public:
    double radius;

    // Constructor to initialize radius
    Circle(double rad) : radius(rad) {}

    // Override calculateArea() method to calculate the area of a circle
    double calculateArea() override {
        return 3.14159265359 * radius * radius;
    }

    // Override displayInfo() method to display circle information
    void displayInfo() override {
        cout << "Shape: Circle" << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

int main() {
    // Create objects of the derived classes
    Rectangle rect(5.0, 3.0);
    Circle circle(2.5);

    // Display information using polymorphism
    Shape* shape1 = &rect;
    Shape* shape2 = &circle;

    shape1->displayInfo(); // Display rectangle information
    cout << endl;
    shape2->displayInfo(); // Display circle information

    return 0;
}
