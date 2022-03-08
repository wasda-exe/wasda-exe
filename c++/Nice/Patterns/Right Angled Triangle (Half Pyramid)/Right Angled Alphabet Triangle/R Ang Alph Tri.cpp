#include <iostream>
using namespace std;

// A
// B B
// C C C
// D D D D
// E E E E E

int main()
{
    int n;
    cin >> n;
    char ch = 'A';

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(ch) << ' ';
        }
        ch++;
        cout << endl;
    }

    return 0;
}