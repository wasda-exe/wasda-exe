#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    //here, I used posn anlaysis. If we used number analysis, we'd have to use 6 nested loops.
    // However, thought processing time would be cut down by half.
    // reason is that counting loops is much easier than checking conditions (cos finding cond tough)
    // 2. the inverted part has much more complex calculations
    // in fact, in number analys, all we had to do was replicate the code and change the starting pos
    // from int i = 1 to N, while decrementing (then back to 1 then back to N, etc)
    //here, N and 1 of two different parts do not overlap
    for (int i = 1; i <= 2*n; i++)
    {   
        for (int j = 1; j <= 2*n; j++)
        {
            if (i <= n){
            if(j <= i || j > 2*n - i){
                cout << '*';
            }else{
                cout << ' ';
            }
            }

            if (i > n){
                if(j <= 2*n - i + 1 || j > i - 1){
                    cout << '*';
                }else{
                cout << ' ';
            }
            }
        }

        cout << endl;
    }
    
    return 0;
}