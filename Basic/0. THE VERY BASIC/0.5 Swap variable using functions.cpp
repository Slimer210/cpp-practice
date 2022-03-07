#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b;

    cout << "Enter two integers";
    cin >> a >> b;

    swap(a, b);

    cout << "Swapped numbers:" << a << b;
    return 0;
    
}