
#include <iostream>
using namespace std;

int main()
{
    int units;
    float mass;
    double weight;

    cin >> units >> mass;

    weight = mass * units;

    cout << "Weight = " << weight << endl;

    return 0;
}
