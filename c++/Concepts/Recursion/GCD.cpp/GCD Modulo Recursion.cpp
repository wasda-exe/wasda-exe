#include <iostream>
#include <cmath>
using namespace std;

int chkgcd(int a, int b)
{

    if (a == 0)
    {
        return b;
    }
    // here, the variables get swapped before proceed. makes up for the lack of cases
    return chkgcd(b % a, a);
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << chkgcd(a, b);
}