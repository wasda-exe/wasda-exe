#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {//here, j<=i because this is number analysis mostly, and we have to get 2 numbers like this 
    // i.e. we don't have to perform pos analysis (by this we mean that I don't need to make a grid
    //like matrix and conform conditions to match for a particular posn of (row, column))

    //num anlys --> syms filled conforming to set number of loops
    //pos anlys --> syms checked (usually via if-else stats), such that the filled syms conform to
    // a posn only when a specific set of criteria are met

    //str cons NA cos string like sybml not num o/p
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    
    return 0;
}