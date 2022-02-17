#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {//BREAKING POINT. you must accurately determine the loop guard. This code was wrong because
    //this loop guard was realted to i instead of n. (oddly enough this is the logic of cut in half)
    //since we're analysing on the basis of positions, we have different conditions for different
    //positions. how can we check a, by default, limited set of positions

    //the mistake was, you should'nt have been conserned with printing i stars for the ith row,
    // since our program checks and fills for each position.
    // if we were starting from the left, we'd have no issue, since we could have been basing our
    // analysis on one line itself.

    //line analysis requires only 1 loop to solve it
    // position check then fill requires atleast 2 loops to solve (since it has to check and fill
    //for row and column poition)
    //3 loops have to occur when the different parts of a line follow different trends.
    // thus you have to print for each part within each line, with different sets of loops.  
        for (int j = 1; j <= i; j++)
        {
            if( j <= n - i){    
                cout << ' ';
            }else{
            cout << '*';
            }
        }
        
        cout << endl;
    }
    
    return 0;
}