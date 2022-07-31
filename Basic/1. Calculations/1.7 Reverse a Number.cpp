#include <iostream>
using namespace std;

int main() {
    int n, reversed, remainder;

    cout << "Enter a number";
    cin >> n;

    while(n != 0) {
    remainder = n % 10;
    reversed = reversed * 10 + remainder;
    n /= 10;
    }

  cout << "Reversed Number = " << reversed;

  return 0;
}