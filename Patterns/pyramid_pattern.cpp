#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for (int i = 0; i < n; i++) {
        //spaces
        for (int j = 0; j < (n-i); j++) {
            cout << " ";
        };
        //numbers
        for (int j = 0; j < (i+1); j++) {
            cout << (j+1);
        };
        //2nd set of numbers
        for (int j = 0; j < i; j++) {
            cout << (j+1);
        };
        cout << endl;
    };
    return 0;
}

// Output

//     1
//    121
//   12312
//  1234123