// finding a quotient and remainder from a division

#include<iostream>
using namespace std;

int main() {
    int divisor, dividend, quotient, remainder;

    cout << "Enter devidend:";
    cin >> dividend;

    cout << "enter divisor:";
    cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "The quotient is: " << quotient << "\n";
    cout << "The remainder is: " << remainder;

}