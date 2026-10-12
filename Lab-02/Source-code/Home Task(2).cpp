#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a small alphabet: ";
    cin >> ch;
    ch = ch - 32;
    cout << "uppercase alphabet: " << ch << endl;
    return 0;
}