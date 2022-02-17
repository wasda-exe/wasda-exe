#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {   //2 s are required
        string s(n-i, ' ');
        //forgot to print
        cout << s << s;

        //lots of foolery here. for decreasing trend portion
        for (int j = i; j >= 1; j--)
        {
            cout << j << ' ';
        }
        
        //for increasing (from 2 onwards) trend portion
        for (int j = 1; j <= i - 1; j++)
        {
            cout << 1 + j << ' ';
        }
        cout << endl;
        
    }
    
    return 0;
}