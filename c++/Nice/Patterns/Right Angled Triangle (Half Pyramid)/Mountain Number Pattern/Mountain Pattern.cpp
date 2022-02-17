#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    //done via number analys. pos would be better if extreme bs

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= 2*n - 2*i -1; j++)
            cout << ' ';
        for (int j = i; j >= 1; j--)
        {   //"bruh"
            // if(i < n)
            // cout << j;
            // else if (i == n)
            // (j - 1 != 0? cout << j-1: cout << "\n");
            if ( j == n)
            continue; // -->> IMP use of continue to skip obnoxious values 
            cout << j;
        }
        cout << endl;
        
    }
    
    return 0;
}