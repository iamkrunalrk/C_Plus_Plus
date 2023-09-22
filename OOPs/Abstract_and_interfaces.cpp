#include <iostream>
using namespace std;

// Abstract class 'Shape' (contains pure virtual functions)
class Shape {
public:
    // Pure virtual function to calculate area (no implementation)
    virtual double calculateArea() = 0;

    // Pure virtual function to display shape information (no implementation)
    virtual void displayInfo() = 0;
};

// Concrete class 'Rectangle' inheriting from 'Shape'
class Rectangle : public Shape {
public:
    double length;
    double width;

    // Constructor to initialize length and width
    Rectangle(double len, double wid) : length(len), width(wid) {}

    // Implement calculateArea() for rectangles
    double calculateArea() override {
        return length * width;
    }

    // Implement displayInfo() for rectangles
    void displayInfo() override {
        cout << "Shape: Rectangle" << endl;
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

// Concrete class 'Circle' inheriting from 'Shape'
class Circle : public Shape {
public:
    double radius;

    // Constructor to initialize radius
    Circle(double rad) : radius(rad) {}

    // Implement calculateArea() for circles
    double calculateArea() override {
        return 3.14159265359 * radius * radius;
    }

    // Implement displayInfo() for circles
    void displayInfo() override {
        cout << "Shape: Circle" << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

int main() {
    // Create objects of concrete classes
    Rectangle rect(5.0, 3.0);
    Circle circle(2.5);

    // Use polymorphism to call abstract class methods
    Shape* shape1 = &rect;
    Shape* shape2 = &circle;

    shape1->displayInfo(); // Display rectangle information
    cout << endl;
    shape2->displayInfo(); // Display circle information

    return 0;
}
