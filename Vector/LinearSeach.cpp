#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> & vec, int target) {
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == target) {
            return i;
        };
    }
    return -1;
};

int main() {
    vector<int> vec = {4, 2, 7, 8, 1, 2, 5};
    int target = 8;

    int result = linearSearch(vec, target);
    cout << "Target value is present at index: " << result << endl;
    return 0;
}