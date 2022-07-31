#include <iostream>
using namespace std;

void sort(int list[], int numberOfElements) {
    int j, temp, numberOfExecutions = 0, numberOfMoves = 0;
    for (int i = 0; i < numberOfElements; i++) {
        numberOfExecutions++;
        for (j = 0; j < numberOfElements - 1; j++) {
            if (list[j] > list[j + 1]) {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
                numberOfMoves++;
            }
        }
    }
    cout << "Number of executions: " << numberOfExecutions << endl;
    cout << "Number of moves: " << numberOfMoves << endl;
    cout << "Sorted list: "; //print the sorted list
    for (int i = 0; i<numberOfElements; i++) {
        cout << list[i] << " ";
    }
} 

int main() {
    int elements;
    cout << "How many elements do you want to sort? ";
    cin >> elements;
    int list[elements];
    for (int i = 0; i < elements; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> list[i];
    }
    sort(list, elements);
}