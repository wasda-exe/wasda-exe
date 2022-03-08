#include <iostream>
using namespace std;

int powcalc(int n, int pow)
{
    if (pow == 0)
    {
        return 1;
    } // fundamentally, we just have to make this following equation
    return (5 * powcalc(n, pow - 1));
}

int main()
{
    int n, pow;
    cin >> n >> pow;

    cout << powcalc(n, pow);
    return 0;
}