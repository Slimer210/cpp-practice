#include <iostream>
#include <cmath>
#include <cassert>
using namespace std;

int answer(float a, float b, float c) {
    // Testing the validity of triangle
    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a)
    {
        cout << "Invalid" << endl;
        return 87;
    }

    // Determine the type of triangles
    if (a == b && b == c)
        cout << "Equilateral Triangle" << endl;
    else if (a == b || b == c || a == c)
        cout << "Isosceles Triangle" << endl;
    else
        cout << "Scalene Triangle" << endl;

    // Calculate the area of triangle
    float s = (a + b + c) / 2;
    int val = round(sqrt(s * (s - a) * (s - b) * (s - c)));
    cout << val << endl;

    return val;
}

int main() {
    // Test Area
    assert(answer(3,4,5)==6);
    assert(answer(36.6,17.0,40)==311);
    assert(answer(8,8,16)==87);
    assert(answer(6,6.0,11)==13);
    assert(answer(67.00,67,67.0)==1944);
    assert(answer(34,56,56)==907);
    assert(answer(17,17,-50)==87);
    assert(answer(9,7,0)==87);
}
