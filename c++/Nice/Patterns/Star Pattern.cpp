#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 1; i <= 2*n; i++)
    {
        if(i <= n){
            string s1(n - i, ' ');
            // string t(2*i - 1, '*');
            // cout << s1 << s1 << t;
            cout << s1 << s1;
            for (int j = 1 ; j <= 2*i - 1; j++)
            {
                cout << '*' << " ";
            }
        }

        if(i > n){
            string s2 (i - n - 1, ' ' );
            cout << s2 << s2;
            //impossible to find during test. I must always grow to decrease star num, thus -
            //it's always this kind of ratio. (n - i + 1). Only here, this is twice as long
            //but the values (if properly substituted would have yielded the same results)
            for (int k = 4*n - 2*i + 1; k >= 1 ; k--)
            {
                cout << '*' << " ";
            }
            
        }

    
        cout << endl;
    }
    
        return 0;
}