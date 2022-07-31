#include <iostream>
using namespace std;

int main() {
    int n, range;

    cout << "Enter multiplication factor and range ";
    cin >> n >> range;

    for (int i = 1; i <= range; ++i) {
        cout << n << " * " << i << " = " << n * i << endl;
    }
    return 0;
}