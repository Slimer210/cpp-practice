#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    float a, b, bmi;
    cin >> a >> b;
    bmi = round((a / pow(b, 2)) * 100.0) / 100.0;
    cout
        << fixed
        << setprecision(2)
        << setfill('0')
        << bmi
        << endl;

    if (bmi>=30) {
        cout << "Obesity" << endl;
    } else if (bmi>=25) {
        cout << "Overweight" << endl;
    } else if (bmi>=20) {
        cout << "Healthy Weight" << endl;
    } else {
        cout << "Underweight" << endl;
    }
}