#include <iostream>
using namespace std;
int main()
{
    float length, width, area;
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;
    area = length * width;
    cout << "Area of rectangle: " << area << endl;
    return 0;
}