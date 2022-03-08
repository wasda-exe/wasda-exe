#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    double a, b, c, d, x, y;

    cout << "Give me vals: ax^2 + bx - c = 0:" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    d = sqrt(b * b - 4 * a * c);

    // can be separated to include the case of a real double root
    switch (d >= 0)
    {
    case 1:
        x = (-b + d) / (2 * a);
        y = (-b - d) / (2 * a);
        cout << "Their are real roots " << x << " and " << y;
        break;

    case 0:
        x = (-b / (2 * a));
        y = (sqrt(-(b * b - 4 * a * c))) / (2 * a);
        cout << "The roots are imaginary and are " << x << " +-i" << y;
        break;

    default:
        cout << "Bad value!";
        break;
    }

    return 0;
}