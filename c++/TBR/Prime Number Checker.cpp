#include<iostream>
using namespace std;

int main(){
    int n, i ;
    cin >> n;
    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0){
            cout << n << " is not a prime number.";
            break;
            }
    }//he used a condition that would only hold true if for would have completely looped
    //and never broken. Smart.
    if(i == n)
    cout << n << " is a prime number.";
    
    return 0;
}