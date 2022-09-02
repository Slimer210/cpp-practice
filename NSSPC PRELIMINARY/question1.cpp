#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    float x, y;
    int a, b, count=0;
    cin >> x >> y;
    if (x<0 or y<0) { //test whether the numbers is zero or positive
        cout << "Invalid Input" << endl;
        exit(0);
    } 
    if (floor(x)!=x or floor(y)!=y) {
        cout << "Invalid Input" << endl;
        exit(0);
    }
    
    if (x>y) swap(x, y); //swap positions to ascending order
    a=x; //hardcore way to manipulate data type
    b=y;
    for (int i=a; i<=b; i++) {
        if (i%2==0) {
            count+=i;
        }
    }
    cout << count << endl;
    }