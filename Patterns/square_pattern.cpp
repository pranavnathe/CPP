#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for(int i = 1; i <= n; i++) {
        for(int i = 1; i <= n; i++) {
            cout << i << " ";
        };
        cout << endl;
    };
    return 0;
}

// Output

// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 