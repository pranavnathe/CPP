#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number: ";
    cin >> n;

    if (n%2 == 0) {
        cout << "Even\n";
    } else {
        cout << "Odd\n";
    }
    
    return 0;
}

// Ternary Statements
// cout << (n%2 == 0 ? "Even" : "Odd") << endl;