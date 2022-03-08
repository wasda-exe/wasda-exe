#include <iostream>
using namespace std;
// *********
// **** ****
// ***   ***
// **     **
// *       *
// **     **
// ***   ***
// **** ****
// *********

int main()
{
    int n;
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        if (i == n)
        {
            string s(2 * n - 1, '*');
            cout << s << endl;
        }
        else
        {
            string sym(i, '*');
            string s2(2 * n - 2 * i - 1, ' ');
            cout << sym << s2 << sym << endl;
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (i == n)
        {
            string s(2 * n - 1, '*');
            cout << s << endl;
        }
        else
        {
            string sym(i, '*');
            string s2(2 * n - 2 * i - 1, ' ');
            cout << sym << s2 << sym << endl;
        }
    }
    return 0;
}