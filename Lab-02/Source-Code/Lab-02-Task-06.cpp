#include <iostream>
using namespace std;

int main() {
    double price1 = 12.95;
    double price2 = 24.95;
    double price3 = 6.95;
    double price4 = 14.95;
    double price5 = 3.95;
    
    double subtotal, salesTax, total;
    double taxRate = 0.06; // 6%
    
    subtotal = price1 + price2 + price3 + price4 + price5;
    salesTax = subtotal * taxRate;
    total = subtotal + salesTax;
    
    cout << "Price of Item 1 = $" << price1 << endl;
    cout << "Price of Item 2 = $" << price2 << endl;
    cout << "Price of Item 3 = $" << price3 << endl;
    cout << "Price of Item 4 = $" << price4 << endl;
    cout << "Price of Item 5 = $" << price5 << endl;
    cout << "--------------------------" << endl;
    cout << "Subtotal = $" << subtotal << endl;
    cout << "Sales Tax (6%) = $" << salesTax << endl;
    cout << "Total = $" << total << endl;
    
    return 0;
}