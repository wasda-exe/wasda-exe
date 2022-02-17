#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {// analysis based on number of symbols requried == num of loops that must occur
    // thus, i just had to ensure that max of n - i + 1 = the num of symbols on that line
    // i.e., if (for n = 5 and the first line) "*****", i started iterating from one (the first posn)
    // the final posn is 5. n - i + 1 = 5 - 1 + 1 = 5. from 1 to 5 there are 5 numbers. thus, this will
    // loop 5 times. the point is to see the number of times this will execute.
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << '*';
        }
        cout << endl;
        
    }
    
    return 0;
}