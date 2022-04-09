#include <iostream>
using namespace std;

void reverse(const string& a);

int main() {
  string str;

  cout << " Please enter a string " << endl;
  getline(cin, str); //new cin method I learnt
    
  reverse(str);

  return 0;    
}

void reverse(const string& str) {

  size_t numOfChars = str.size();

  if(numOfChars == 1) { // to save your cpu for sure
    cout << str << endl;
  }
  else {
    cout << str[numOfChars - 1]; // print in reverse format

    // recursion... fantastic
    reverse(str.substr(0, numOfChars - 1));
  }
}