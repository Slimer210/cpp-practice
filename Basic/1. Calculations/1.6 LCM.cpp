#include <iostream>
using namespace std;

int main() {
    int n1, n2, max;

    cout << "Enter two numbers";
    cin >> n1 >> n2;

    // store the largest number between 2 numbers to max
    max = (n1 > n2) ? n1 : n2;

    do {
        if (max % n1 == 0 && max % n2 == 0) {
            cout << "LCM = " << max << endl;
            break;
        }
        else {
            ++max;
        }
    } while (true);

    return 0;
}