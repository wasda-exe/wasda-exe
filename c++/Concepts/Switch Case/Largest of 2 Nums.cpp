#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    double a, b;
    cin >> a >> b;

    // switch (fmax(a, b)) ---> unnecessary and inconvenient

    switch (a >= b)
    {
    case 1:
        cout << "The larger of the two is " << a;
        break;

    case 0:
        cout << "The larger of the two is " << b;
        break;

    default:
        break;
    }
    return 0;
}