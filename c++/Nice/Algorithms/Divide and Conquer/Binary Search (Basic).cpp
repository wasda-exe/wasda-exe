#include <iostream>
using namespace std;

int main()
{

    int n, num;
    cout << "number of elements: ";
    cin >> n;

    int a[1000];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "num you wanna search: ";
    cin >> num;

    int s, e, mid;
    s = 0;
    e = n - 1;

    for (int i = 0;; i++)
    {
        mid = (s + e) / 2;

        if (num < a[mid])
        {
            e = mid;
        }
        else if (num > a[mid])
        {
            s = mid + 1;
        }
        else if (num == a[mid])
        {
            cout << "bruh " << mid;
            break;
        }
    }

    // int mid = (a[0] + a[n - 1]) / 2;

    // cout << "gea;";
    // if (num < mid)
    // {
    //     for (int j = 0; j <= mid; j++)
    //     {
    //         if (a[j] == num)
    //         {
    //             cout << "The num is located at index " << j;
    //         }
    //     }
    // }
    // else if (num > mid)
    // {
    //     for (int j = 0; j <= mid; j++)
    //     {
    //         if (a[j] == num)
    //         {
    //             cout << "The num is located at index " << j;
    //         }
    //     }
    // }

    return 0;
}