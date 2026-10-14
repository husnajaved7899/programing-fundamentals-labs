#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num > 0) {
        cout << "Number is Positive" << endl;
    } else if (num < 0) {
        cout << "Number is Negative" << endl;
    } else {
        cout << "Number is Zero" << endl;
    }
    return 0;
}