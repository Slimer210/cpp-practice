#include <iostream>
#include <stack>
using namespace std;

stack<int> myStack; //global stack

int showMenu() {
    
    //This is the main menu
    if (myStack.empty()) {cout << "The stack is empty" << endl;} else {
        cout << "The current stack size is: " << myStack.size() << endl;
        cout << "The integer on the top is: " << myStack.top() << endl << endl;
    }
    return 0;
}

int main() {
    cout << "Stack Sandbox v0.1, just a small stack simulation" << endl << endl;
    int input;
    while(true) {

        showMenu();
        cout << "(1) Insert a number" << endl;
        cout << "(2) Remove the top value" << endl;
        cout << "(3) Remove all elements" << endl;
        cout << "(0) Exit" << endl << endl;
        cout << "Enter a Choice: ";
        cin >> input;
        if (input==1) {
            int x;
            cout << "value to insert: " << endl;
            cin >> x;
            myStack.push(x);
        } 
        else if (input==2) {if(myStack.size()>=1) myStack.pop();} 
        else if (input==3) {while(myStack.size()>=1) {myStack.pop();};} 
        else if (input==0) {break;}
        else {cout << "Invalid Option" << endl;}
        
    }
    cout << endl << endl; //I hate fricking windows
    return 0;
    
}