#include<iostream>
using namespace std;

// sum(x) = 1+2+3+...+x
// Therefore, sum(x) = x+(x-1)+(x-2)+...+1
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
