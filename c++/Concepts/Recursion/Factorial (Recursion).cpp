
#include <iostream>
using namespace std;

// int factorial(int a)
// {
//     int ans = 1;
//     for (int i = 1; i <= a; i++)
//     {
//         ans = ans * i;
//     }
//     return ans;
// }

int factorial(int a)
{
    if (a <= 1)
        return 1;
    return a * factorial(a - 1);
}

int main()
{
    int n, f;
    cin >> n;
    f = factorial(n);
    cout << f;
    return 0;
}