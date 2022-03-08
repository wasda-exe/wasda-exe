#include <iostream>
using namespace std;

void toBinary(int n)
{
    int a[32];
    int i = 0;
    while (n > 0)
    {
        a[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << a[j];
    }
}

int main()
{
    int N;
    cin >> N;
    toBinary(N);

    return 0;
}