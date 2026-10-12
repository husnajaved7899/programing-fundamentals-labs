#include <iostream>
using namespace std;
int main()
{
    float base, height, area;
    cout << "Enter base of triangle: ";
    cin >> base;
    cout << "Enter height of triangle: ";
    cin >> height;
    area = base * height * 0.5;
    cout << "Area of triangle: " << area << endl;
    return 0;
}