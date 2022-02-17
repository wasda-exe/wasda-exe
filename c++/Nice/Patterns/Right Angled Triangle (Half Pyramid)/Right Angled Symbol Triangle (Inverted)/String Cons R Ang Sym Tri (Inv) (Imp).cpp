#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
// all ive done is interchange the numbers (works the same)
// MIND THE EQUALITY REVERSAL AS WELL AS DECREMENT;
    for (int i = n; i >=1 ; i--)
    {// analysis based on number of symbols requried == num of loops that must occur

    // n stars print on the first line and then you keep removing stars (kinda)
    // we notice that (if we assign numbers from the bottom), we print n stars on line n(i, technically)
        for (int j = 1; j <= i; j++)
        {
            cout << '*';
        }
        cout << endl;
        
    }
    
    return 0;
}