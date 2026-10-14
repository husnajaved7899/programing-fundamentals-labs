#include <iostream>
using namespace std;

int main() {
    int mark;
    cout << "Enter your Marks: ";
    cin >> mark;

    if (mark >= 75) {
        cout << "Grade A" << endl;
    } else if (mark >= 60) {
        cout << "Grade B" << endl;
    } else if (mark >= 45) {
        cout << "Grade C" << endl;
    } else if (mark < 30) {
        cout << "Grade D" << endl;
    } else {
        cout << "Fail" << endl;
    }
    return 0;
}