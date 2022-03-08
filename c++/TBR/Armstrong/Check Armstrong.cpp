#include <iostream>
#include <cmath>
using namespace std;

void checkArm(int n)
{
    int digHun, digTen, digOne;
    digHun = n / 100;
    digTen = n / 10 - 10 * digHun;
    digOne = n % 10;

    if (n == pow(digHun, 3) + pow(digTen, 3) + pow(digOne, 3))
    {
        cout << n << " is an armstrong number.";
    }
    else
        cout << n << " is not an armstrong number.";
}

int main()
{ // 1 < n < 1000
    int n;
    cin >> n;

    // cout << 342 / 100;
    // cout << 342 / 10 - (342 / 100) * 10;
    // cout << 342 % 10;

    checkArm(n);

    return 0;
}