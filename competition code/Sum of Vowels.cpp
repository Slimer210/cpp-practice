#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        if (tolower(s[i]) == 'a' || tolower(s[i]) == 'e' || tolower(s[i]) == 'i' || tolower(s[i]) == 'o' || tolower(s[i]) == 'u') {
            sum ++;
        }
    }
    cout << sum << endl;
}
