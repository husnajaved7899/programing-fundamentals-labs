
#include <iostream>
using namespace std;

int main()
{
    int number1, number2;
    float quotient;

    cout << "Enter two numbers and I will divide\n";
    cout << "the first by the second for you.\n";

    cin >> number1 >> number2;

    quotient = static_cast<float>(number1) / number2;

    cout << "Quotient = " << quotient << endl;

    return 0;
}
