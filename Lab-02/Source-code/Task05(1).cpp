#include <iostream>
using namespace std;
int main()
{
    double r, area;
    const double pie = 3.14159;
    cout << "Enter radius of circle: ";
    cin >> r;
    area = pie * r * r;
    cout << "Area of a circle: " << area << endl;
    return 0;
}