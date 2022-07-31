#include <iostream>
using namespace std;

int main() {
    cout << "Input speed of boat, water stream speed, time\n";
    int speed=26, stream_speed=4;
    double time;
    cin >> time;
    float D=(time*((speed^2)-(stream_speed^2)))/(2*speed);

    cout << D << endl;
}