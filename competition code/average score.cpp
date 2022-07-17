#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int score[6];
    for (int i=0; i<7; i++) {
        cin >> score[i];
    }
    sort(score, score+7);
    cout << (score[2]+score[3]+score[4])/3;
}