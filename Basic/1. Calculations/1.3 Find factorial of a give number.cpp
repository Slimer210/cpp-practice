#include <iostream>
using namespace std;

int main() {
    int n;
    long double factorial = 1.0;

    cout << "Enter an Integer:";
    cin >> n;

    if(n < 0)
        cout << "The factorial number musn't be negative" << endl;

    else {
        for (int i = 1; i<=n; ++i) {
            factorial *=i;
        }
        cout << "Factorial of " << n << "is " << factorial;
    }
}