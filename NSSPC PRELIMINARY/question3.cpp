#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double cToF(float wtf) {
    return round((((wtf-32)/1.8)+32)*10)/10;
}

double fToC(float wtf) {
    return round((((5*wtf)-160)/9)*10)/10;
}

int main() {
    string data;
    float magnitude;
    char type;

    cin >> data;
    type = data.back();
    data.pop_back();
    magnitude = stof(data);
    if (type=='C') {
        cout << setprecision(1) << cToF(magnitude) << fixed << 'F' << endl;
    } else {
        cout << fixed << setprecision(1) << fToC(magnitude) << 'C' << endl;
    }

}