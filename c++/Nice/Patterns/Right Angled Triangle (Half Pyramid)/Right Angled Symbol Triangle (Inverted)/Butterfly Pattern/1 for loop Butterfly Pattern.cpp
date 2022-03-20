#include <iostream>
#include <iomanip>
using namespace std;

// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= 2 * n; i++)
    {
        if (i <= n)
        {
            string t(i, '*');
            // via simply 2n - twice num of stars
            string s1(2 * n - 2 * i, ' ');
            // don't know why setw didn't behave properly. Admittedly, I doubt its setw's fault
            // maybe something happened... yet defining another string seems more reliable (but more time)
            //  cout << t << setw(2*n - 2*i + 1) << t;
            cout << t << s1 << t;
        }

        if (i > n)
        {
            // partially hit and trial
            // looked at last. recognised that at last line, i = 2n. Increases linearly while mv up
            string b(2 * n - i + 1, '*');
            // via simply 2n - twice num of stars
            string s2(2 * i - 2 * n - 2, ' ');
            cout << b << s2 << b;
        }

        cout << endl;
    }

    return 0;
}