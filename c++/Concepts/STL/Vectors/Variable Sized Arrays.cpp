#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// template <class T>

int main()
{
    int n, q, a;
    cin >> n >> q;
    // ############# Method 1 (mine) ##############
    vector<vector<int>> arr; // multidimensional vector definition
    for (int i = 0; i < n; i++)
    {
        int size;
        cin >> size;
        vector<int> a(size);
        // defining a 'third' vector

        for (int j = 0; j < size; j++)
        {
            cin >> a[j];
        }
        // passing a vector to the main vector. can be done
        arr.push_back(a);
    }
    //############### Method 2 ###################
    // vector<vector<int>> arr(n);
    // for (int i = 0; i < n; i++)
    // {
    //     int size;
    //     cin >> size;

    //     for (int j = 0; j < size; j++)
    //     {
    //         cin >> a;
    // can take each of these 'sub' vectors and pass these subvectors elements, individually
    // basically, you can pass a multidimensional vector another vector
    // you can pass a vector elements
    //     arr[i].push_back(a);
    //     }
    // }
    int i, j;
    for (int k = 0; k < q; k++)
    {
        cin >> i >> j;
        cout << arr[i][j] << endl;
    }
    return 0;
}