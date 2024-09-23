#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        };
    }
    return -1;
};

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;
    int target = 8;

    int result = linearSearch(arr, size, target);
    cout << "Target value is present at index: " << result << endl;
    return 0;
};