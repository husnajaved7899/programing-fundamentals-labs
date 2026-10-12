#include <iostream>
using namespace std;

int main()
{
    double radius, length, width, base, height;
    const double PI = 3.14159;

    // 1. Circle
    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of Circle = " << PI * radius * radius << endl;

    // 2. Rectangle
    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;
    cout << "Area of Rectangle = " << length * width << endl;

    // 3. Triangle
    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle = " << base * height * 0.5 << endl;

    return 0;
}