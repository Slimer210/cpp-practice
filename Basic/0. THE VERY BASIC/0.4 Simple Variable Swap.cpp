#include <iostream>
using namespace std;

int main() {

    int a, b, temp;

    cout << "Input two Integers";
    cin >> a >> b;

    cout << "Original Number" << a << b;

    temp = a;
    a = b;
    b = temp;

    cout << "\nSwapped numbers" << a << b;

    return 0;
}