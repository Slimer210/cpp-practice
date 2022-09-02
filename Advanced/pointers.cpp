
#include <iostream>
#include <string>
using namespace std;

int main() {

    int a = 3;
    int b = 4;
    int c = 5;

    int *ptr;

    ptr = &a;
    *ptr = 10;
    cout << ptr << endl;

    cout << "a: " << a << '\n'; // 10
    cout << "b: " << b << '\n'; // 4
    cout << "c: " << c << '\n'; // 5
    
    return 0;
}