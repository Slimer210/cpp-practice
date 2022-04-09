#include <iostream>
using namespace std;

int main() {
 char c;
 cout << "Enter a character: ";
 cin >> c;
 cout << "ASCII Value of " << c << " is " << int(c); //in cpp, a character is stored in ascii format. so to get its ascii value, just print it as a number.
 return 0;
}