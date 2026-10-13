#include <iostream>
using namespace std;

int main() {
    double r, area;
    const double PI = 3.14159;
    
    cout << "Enter radius of circle: ";
    cin >> r;
    
    area = PI * r * r;
    
    cout << "Area of Circle = " << area << endl;
    
    return 0;
}