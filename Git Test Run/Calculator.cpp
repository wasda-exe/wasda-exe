#include <iostream>

using namespace std;

int main()
{
    double a, b;
    cout << "Input the 2 numbers to be calculated:\n";
    cin >> a >> b;

    char op;
    cout << "Operation?\n";
    cin >> op;

    switch (op)
    {
        case '+':
        cout << a + b;
        break;

        case '-':
        cout << a - b;
        break;

        case '*':
        cout << a * b;
        break;

        case '/':
        cout << a / b;
        break;

        default:
        cout << "Enter valid operator, please.";
        break;


    }

    return 0;


}
