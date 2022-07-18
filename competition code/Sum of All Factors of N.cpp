#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    // There's no factors that bigger than half of N, so this is why you can just validate half of the process.
    for (int i = 1; i <= n/2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    sum += n;

    cout << sum;
    return 0;
}
