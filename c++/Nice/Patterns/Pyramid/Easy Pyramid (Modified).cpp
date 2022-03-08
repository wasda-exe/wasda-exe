#include <iostream>
using namespace std;

// ****1****
// ***2*2***
// **3*3*3**
// *4*4*4*4*
// 5*5*5*5*5

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i != n)
        {
            string s(n - i, '*');
            string s2(n - i - 1, '*');
            cout << s;
            for (int j = 1; j <= i; j++)
            {
                cout << i << '*';
            }
            cout << s2 << endl;
        }
        if (i == n)
        {
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                if (j % 2 != 0)
                    cout << i;
                if (j % 2 == 0)
                    cout << '*';
            }
        }
    }
    return 0;
}