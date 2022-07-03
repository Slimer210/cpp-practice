#include <iostream>
using namespace std;

int inseretionSort(int arr[], int n)
{
    int i, key, j, numberofExecutions = 0, numberofMoves = 0;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
            numberofMoves++;
        }
        arr[j + 1] = key;
        numberofExecutions++;
    }
    cout << "Number of executions: " << numberofExecutions << endl;
    cout << "Number of moves: " << numberofMoves << endl;
    return 0;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }
    inseretionSort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}