#include <iostream>
using namespace std;

void printNat(int n, int times)
{
    if (times <= n)
    {
        cout << times << ' ';
        printNat(n, times + 1);
    }
}

int main()
{
    printNat(100, 1);
    return 0;
}