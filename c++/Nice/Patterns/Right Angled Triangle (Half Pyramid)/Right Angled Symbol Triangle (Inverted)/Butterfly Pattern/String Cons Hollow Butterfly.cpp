#include <iostream>
using namespace std;

// *         *
// **       **
// * *     * *
// *  *   *  *
// *   * *   *
// *    *    *
// *   * *   *
// *  *   *  *
// * *     * *
// **       **
// *         *

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n - 1; i++)
    {
        if (i == 1)
        {
            string s(2 * n - 3, ' ');
            cout << '*' << s << '*' << endl;
        }
        else
        {
            string s1(i - 2, ' ');
            string s2(2 * n - 2 * i - 1, ' ');
            cout << '*' << s1 << '*' << s2 << '*' << s1 << '*' << endl;
        }
    } // this part exists to buffer between the two proper sets of work. may be excluded
    string a(n - 2, ' ');
    cout << '*' << a << '*' << a << '*' << endl;
    // must start from n - 1, not n + 1
    for (int i = n - 1; i >= 1; i--)
    {
        if (i == 1)
        {
            string s(2 * n - 3, ' ');
            cout << '*' << s << '*' << endl;
        }
        else
        {
            string s1(i - 2, ' ');
            string s2(2 * n - 2 * i - 1, ' ');
            cout << '*' << s1 << '*' << s2 << '*' << s1 << '*' << endl;
        }
    }

    return 0;
}