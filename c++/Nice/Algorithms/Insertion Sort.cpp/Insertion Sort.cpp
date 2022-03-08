#include <iostream>
using namespace std;

int *isort(int a[], int n)
{
    while (true)
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > a[i + 1])
            {
                swap(&a[i], &a[i + 1]);
                cnt++;
            }
        }
        if (cnt == 0)
        {
            break;
        }
    }
    return a;
}

int swap(int *aRef, int *aNextRef)
{
    int temp = *aNextRef;
    *aNextRef = *aRef;
    *aRef = temp;
}

int main()
{
    int n;
    cout << "Number of elements: ";
    cin >> n;

    int a[n] = {};

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << isort(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }

    return 0;
}