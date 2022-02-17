#include<iostream>
using namespace std;

int main(){
    int n, num = 10;
    cin >> n;
    int a[n];
    int index[num] = {};

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        // it is not possible to resize an array once initialized
        // gots to use vector or lists instead, then can modify
        index[a[i]]++;
        if(num < a[i] + 1)
        num = a[i];

    }

    for (int i = 0; i < n; i++)
    if(index[a[i]] == 1)
    cout << a[i];
    
    return 0;
}