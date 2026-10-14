#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b) {
        if (a >= c)
            cout << "Largest is: " << a;
        else
            cout << "Largest is: " << c;
    } else {
        if (b >= c)
            cout << "Largest is: " << b;
        else
            cout << "Largest is: " << c;
    }
    return 0;
}