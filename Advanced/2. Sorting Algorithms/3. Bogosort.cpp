// just for fun

#include <iostream>
using namespace std;
int is_sorted(int *arr, int n) {
   while ( --n >= 1 ) {
      if ( arr[n] < arr[n-1] ) {
         return 0;
      }
   }
   return 1;
}
void shuffle(int *arr, int n) {
   int temp, r;
   for(int i=0; i < n; i++) {
      temp = arr[i];
      r = rand() % n;
      arr[i] = arr[r];
      arr[r] = temp;
   }
}
void bogosort(int *arr, int n) {
   while ( !is_sorted(arr, n) ) {
      shuffle(arr, n);
   }
}
int main() {
    int i;
    cout << "Enter the number of elements: ";
    cin >> i;
    int arr[i];
    for(int j=0; j < i; j++) {
        cout << "Enter element " << j+1 << ": ";
        cin >> arr[j];
    }
   bogosort(arr, i);
   for (i=0; i < 5; i++) {
      cout<< arr[i]<<" ";
   }
}