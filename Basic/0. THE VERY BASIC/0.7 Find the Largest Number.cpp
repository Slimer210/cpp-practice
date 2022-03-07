#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3;

    cout << "Type 3 numbers";
    cin >> n1 >> n2 >> n3;

    if ((n1 >=n2) && (n1>=n3))
        cout << "Largest is " << n1;

    else if ((n2>=n1) && (n2>=n3))
        cout << "Largest is " << n2;

    else
        cout << "Largest is " << n3;

    return 0;
    
}