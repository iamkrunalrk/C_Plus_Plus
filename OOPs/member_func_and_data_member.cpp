#include <iostream>
using namespace std;

// Define a class called 'Rectangle'
class Rectangle {
public:
    // Data members (attributes)
    double length;
    double width;

    // Member function to calculate the area of the rectangle
    double calculateArea() {
        return length * width;
    }

    // Member function to calculate the perimeter of the rectangle
    double calculatePerimeter() {
        return 2 * (length + width);
    }

    // Member function to display rectangle information
    void displayInfo() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};

int main() {
    // Create an object of the 'Rectangle' class
    Rectangle rect;

    // Initialize data members
    rect.length = 5.0;
    rect.width = 3.0;

    // Display rectangle information using member functions
    cout << "Rectangle Information:" << endl;
    rect.displayInfo();

    return 0;
}