#include<iostream>
using namespace std;

int main(){
    int r, c;
    cin >> r >> c;

    //modified nomenclature so as to be able to assign positions with physical significance
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            //b4 this, we iterate across all posns. the following code doesn't go line by line,
            //but, instead, checks the required output for each position

            // if( (i == 1 || i == r) || (j == 1 || j == c) ){ //can see it like this
            if( i == 1 || i == r || j == 1 || j == c ){ //print all stars posns (or is T for any T)
                cout << '*';
            }else{ // fills all other posns with empty spaces
                cout << ' ';
            }
        }
            cout << endl;
        
    }
    
    return 0;
}