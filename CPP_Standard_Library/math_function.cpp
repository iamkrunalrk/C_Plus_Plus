#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // -------------------- Basic Math Functions --------------------

    double x = 4.0;
    double y = 2.0;

    // Square root
    double sqrtResult = sqrt(x);
    cout << "Square root of " << x << " is " << sqrtResult << endl;

    // Power (x^y)
    double powResult = pow(x, y);
    cout << x << " raised to the power of " << y << " is " << powResult << endl;

    // Absolute value
    double absResult = fabs(-5.5);
    cout << "Absolute value of -5.5 is " << absResult << endl;

    // Trigonometric functions (sine, cosine, tangent)
    double angle = 1.0;
    double sinResult = sin(angle);
    double cosResult = cos(angle);
    double tanResult = tan(angle);
    cout << "Sine of " << angle << " is " << sinResult << endl;
    cout << "Cosine of " << angle << " is " << cosResult << endl;
    cout << "Tangent of " << angle << " is " << tanResult << endl;

    // -------------------- Constants --------------------

    cout << "Value of pi (π): " << M_PI << endl;
    cout << "Value of e (Euler's number): " << M_E << endl;

    return 0;
}