
#include <iostream>
using namespace std;

int main()
{
    int qty = 10;
    int salesReps = 3;
    float unitsEach;

    unitsEach = static_cast<float>(qty) / salesReps;

    cout << "Units Each = " << unitsEach << endl;

    return 0;
}
