#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;

    cout << "Enter coefficient of a, b, c";
    cin >> a >> b >> c;

    discriminant = (b*b) - (4*a*c); //the formula for discriminant

    if (discriminant>0) { //The roots are real and different
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);

        cout << "Roots are real but different.\n";
        cout << "The roots of this quadratic equation is: " << x1 << ", " << x2;
    }

    else if (discriminant==0) { //The roots are real and same
        cout << "Roots are real and same.\n";
        x1 = -b/(2*a);
        cout << "x1=x2=" << x1 << endl;
    }

    else { //The roots are imaginary
        realPart = -b/(2*a);
        imaginaryPart = sqrt(-discriminant)/2*a;
        cout << "The roots are imaginary and different" << endl;
        cout << "x1=" << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2=" << realPart << "-" << imaginaryPart << "i" << endl;
    }
}