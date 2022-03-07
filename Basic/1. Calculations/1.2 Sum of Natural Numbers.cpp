/* This program will count the sum of the natural from 1 to user input */

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter your prefered integers: ";
    cin >> n;

    for (int i = 1; i <=n; ++i) {
        sum+=i;
    }

    cout << "Sum of the integers: " << sum << endl;
    return 0;
}