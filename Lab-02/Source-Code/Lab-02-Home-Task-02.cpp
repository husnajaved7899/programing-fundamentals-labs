#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter alphabet in small caps (a-z): ";
    cin >> ch;

    // ASCII trick: 'a' - 'A' = 32
    char upper = ch - 32;

    cout << "Upper caps: " << upper << endl;
    return 0;
}