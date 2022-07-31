#include <iostream>
#include <string>
using namespace std;

int main() {
    string dna, crimeScene, DNA1, DNA2, DNA3, DNA4;
    cin >> dna;
    cin >> crimeScene;
    cin >> DNA1;
    cin >> DNA2;
    cin >> DNA3;
    cin >> DNA4;

    int count = 0;
    for (int i = 0; i < crimeScene.length(); i++) {
        if (crimeScene[i] == DNA1[i]) {
            count++;
        }
    }
    cout << count << endl;
}
