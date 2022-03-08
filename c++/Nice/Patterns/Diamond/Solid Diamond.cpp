#include <iostream>
using namespace std;
//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        string s(n - i, ' ');
        string sym(2 * i - 1, '*');
        cout << s << sym << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        string s(n - i, ' ');
        string sym(2 * i - 1, '*');
        cout << s << sym << endl;
    }

    return 0;
}