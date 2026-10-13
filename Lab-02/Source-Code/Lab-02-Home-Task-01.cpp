#include <iostream>
using namespace std;

int main() {
    int var1, var2, temp;
    
    cout << "Enter var1: ";
    cin >> var1;
    cout << "Enter var2: ";
    cin >> var2;

    cout << "Before Swap: var1 = " << var1 << " , var2 = " << var2 << endl;

    temp = var1;
    var1 = var2;
    var2 = temp;

    cout << "After Swap: var1 = " << var1 << " , var2 = " << var2 << endl;
    return 0;
}