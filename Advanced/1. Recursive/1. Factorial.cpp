#include<iostream>
using namespace std;

//factorial x!
// Factorial of x = x+(x-1)+(x-2)+(x-3)+...+1
int factorial(int n) {
    if (n==0) return 1;
    else return (n*factorial(n-1));
}

int main() {
    int x;
    cin >> x;
    cout << factorial(x);
}

