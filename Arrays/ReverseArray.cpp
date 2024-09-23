#include<iostream>
using namespace std;

int reverseArr(int arr[], int size) {
    int start = 0, end = size - 1;
    while (start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    return 0;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(int);

    reverseArr(arr, size);
    
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    };
    cout << endl;

    return 0;
}