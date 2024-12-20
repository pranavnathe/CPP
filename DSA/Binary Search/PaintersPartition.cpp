#include <iostream>
#include <vector>

using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int maxAllowedTime) {
    int painters = 1, time = 0;

    for (int i=0; i<n; i++) {

        if (time + arr[i] <= maxAllowedTime) {
            time += arr[i];
        } else {
            painters++;
            time = arr[i];
        }
    }

    return painters > m ? false : true;
}

int minTimeToPaint(vector<int> &arr, int n, int m) {
    int sum = 0, maxVal = INT_MIN;
    for (int i=0; i<n; i++) {
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }

    int st = maxVal, end = sum, ans = -1; // range of possible answers

    while (st <= end) {
        int mid = st+(end-st)/2;

        if (isPossible(arr, n, m, mid)) { // left
            ans = mid;
            end = mid - 1;
        } else { // right
            st = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {40, 30, 10, 20};
    // output = 60
    int n = arr.size(), m = 2;
    // m is the number of painter's

    cout << minTimeToPaint(arr, n, m) << endl;
    return 0;
}