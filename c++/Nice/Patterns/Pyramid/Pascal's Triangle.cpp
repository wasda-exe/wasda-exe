#include <iostream>
using namespace std;

//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // num initialized to provide the starting value with which coeff is multiplied
        int num = 1;
        // this is just for spaces before the pattern
        string s(n - i, ' ');
        cout << s;
        // the observation here is that the ith row has i elements (including space outs)
        for (int j = 1; j <= i; j++)
        {
            cout << num << ' ';
            // formula provided by bynomial series
            num = num * (i - j) / (j);
        }
        cout << endl;
    }

    return 0;
}