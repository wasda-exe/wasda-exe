#include <iostream>
using namespace std;

int binary_search(int a[], int n, int num) // --> array initiation not perfect yet
{
    int s, e, mid;
    s = 0;
    e = n - 1;

    while (s <= e)
    {
        mid = (s + e) / 2;

        if (a[mid] == num)
        {
            // cout << "The num is at index " << mid;
            return mid;
            // cout << "nig";
        }
        if (a[mid] < num)
        {
            s = mid + 1;
            // cout << "burh";
        }
        if (a[mid] > num)
        {
            e = mid - 1; // ---> BREAK POINT
            // cout << "wow";
        }
    }
    return -1;
}

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

    cout << "The number is at index " << binary_search(a, n, num);

    return 0;
}