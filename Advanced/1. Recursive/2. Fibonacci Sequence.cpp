#include<iostream>
using namespace std;

// fib(n)=fib(n-1)+fib(n-2)+...+1
long fib(long n) {
    if (n==0||n==1) return n;
    else return fib(n-1) + fib(n-2);
}

int main() {
    int x;
    cin >> x;
    cout << fib(x);
}
