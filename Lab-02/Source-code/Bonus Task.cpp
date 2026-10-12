#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a five-digit number: ";
    cin >> num;

    int d1 = num / 10000;
    int d2 = (num / 1000) % 10;
    int d3 = (num / 100) % 10;
    int d4 = (num / 10) % 10;
    int d5 = num % 10;

    cout << d1 << "   " << d2 << "   " << d3 << "   " << d4 << "   " << d5 << endl;

    return 0;
}