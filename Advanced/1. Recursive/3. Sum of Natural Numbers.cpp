#include<iostream>
using namespace std;

int sum(int x) {
    if (x>0) {
        return x + sum(x-1);
    }
    else {
        return 0;
    }
}

int main() {
    int input;
    cout << "enter a number: ";
    cin >> input;
    int result = sum(input);
    cout << result;
    return 0;
}