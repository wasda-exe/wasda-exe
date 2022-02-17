#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int index[10] = {};

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        
        index[a[i]]++;

    }

    for (int i = 0; i < n; i++)
    if(index[a[i]] == 1)
    cout << a[i];
    
    return 0;
}