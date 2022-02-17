#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;

    // can also be implemented by obs that all odd places have (i + j) as odd.
    for (int i = 1; i <= n; i++)
    {     
    bool ans = true;
        if (i%2 == 0){
            ans = !ans;
        }  
        for (int j = 1; j <= i; j++)
        {
            cout << ans;
            ans = !ans;
        }
        

        cout << endl;
    }
    
    return 0;
}