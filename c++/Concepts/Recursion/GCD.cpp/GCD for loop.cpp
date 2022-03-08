#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b)
{
    int gcd = 1;
    int ans = 1;
    for (int i = 1; i <= fmin(a, b); i++)
    {
        ans++;
        if ((a % ans == 0) && (b % ans == 0))
        {
            gcd = ans;
        }
    }
    return gcd;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b);

    return 0;
}