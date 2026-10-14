
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    int num1 = rand() % 500 + 1;
    int num2 = rand() % 500 + 1;
    int answer;

    cout << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "--------" << endl;

    cout << "Press Enter to see the answer.";
    cin.get();

    answer = num1 + num2;

    cout << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "--------" << endl;
    cout << answer << endl;

    return 0;
}
