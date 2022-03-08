#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

void printfib(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << fib(i) << ' ';
    }
}

int main()
{
    int n;
    cin >> n;

    printfib(n);
    return 0;
}