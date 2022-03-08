#include <iostream>
using namespace std;

void table(int n, int times)
{

    if (times <= 10)
    {
        cout << n * times << endl;
        times++;
        table(n, times);
    }
}

int main()
{
    int n;
    cin >> n;
    table(n, 1);

    return 0;
}