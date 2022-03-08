#include <iostream>
#include <cmath>
using namespace std;

int chkgcd(int a, int b, int gcd)
{

    if (a == 0)
    {
        // during each function call both a and b are modified
        // here, b is the value that was considered just before a becomes 0
        return b;
    }
    if (b == 0)
    {
        return a;
    }
    else if (a > b)
    {
        return chkgcd(a - b, b, gcd);
    }
    else
        return chkgcd(a, b - a, gcd);
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << chkgcd(a, b, 1);
}