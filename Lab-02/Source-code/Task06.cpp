#include <iostream>
using namespace std;
int main()
{
    float item1 = 12.95f;
    float item2 = 24.95f;
    float item3 = 6.95f;
    float item4 = 14.95f;
    float item5 = 3.95f;

    float subtotal, sales_tax, Total;
    const float Tax_Rate = 0.06f;

    subtotal = item1 + item2 + item3 + item4 + item5;
    sales_tax = subtotal * Tax_Rate;
    Total = subtotal + sales_tax;

    cout << "price of item1: $" << item1 << endl;
    cout << "price of item2: $" << item2 << endl;
    cout << "price of item3: $" << item3 << endl;
    cout << "price of item4: $" << item4 << endl;
    cout << "price of item5: $" << item5 << endl;

    cout << "subtotal of the sale: $" << subtotal << endl;
    cout << "Amount of sales Tax (6%): $" << sales_tax << endl;
    cout << "Total: $" << Total << endl;

    return 0;
}