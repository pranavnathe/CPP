#include<iostream>
#include<vector>
using namespace std;

int reverseVector(vector<int>& vec) {
    int start = 0, end = vec.size() - 1;
    while (start < end) {
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
    return 0;
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6};

    reverseVector(vec);
    
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    };
    cout << endl;

    return 0;
}