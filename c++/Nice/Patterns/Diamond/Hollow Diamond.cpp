#include <iostream>
using namespace std;
//    *
//   * *
//  *   *
// *     *
//  *   *
//   * *
//    *

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            string s(n - i, ' ');
            cout << s << '*' << endl;
        }
        else
        {
            string s(n - i, ' ');
            string s2(2 * i - 3, ' ');
            cout << s << '*' << s2 << '*' << endl;
        }
    }
    for (int i = n - 1; i >= 1; i--)
    {
        if (i == 1)
        {
            string s(n - i, ' ');
            cout << s << '*' << endl;
        }
        else
        {
            string s(n - i, ' ');
            string s2(2 * i - 3, ' ');
            cout << s << '*' << s2 << '*' << endl;
        }
    }

    return 0;
}