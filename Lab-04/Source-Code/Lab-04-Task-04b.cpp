#include <iostream>
using namespace std;
int main() {
    int num, count = 0;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        int temp = num;
        while (temp != 0) {
            temp /= 10;
            count++;
        }
        cout << "Number is Positive" << endl;
        cout << "Digits: " << count << endl;
    } else {
        cout << "Number is not positive" << endl;
    }
    return 0;
}