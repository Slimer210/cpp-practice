// basic addition app by typing 2 numbers eg: input 5 6 output 11

#include <iostream>
using namespace std;

int main() {
    int firstNum, secondNum, result;

    cout << "Enter two integers";
    cin >> firstNum >> secondNum;

    //store two variables which typed by users
    result = firstNum+secondNum;

    cout  << "The result is: " << result;
    
}