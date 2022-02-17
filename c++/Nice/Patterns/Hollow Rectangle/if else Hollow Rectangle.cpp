#include<iostream>
using namespace std;

int main(){
    int r, c;
    cin >> r >> c;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if( i == 0 || i == r - 1){ //print all stars for 1st and last lines
                cout << '*';
            }else if( j == 0 || j == c - 1){ // print stars for 1st and last posns within a line
                cout << '*';
            }
            else{ // fills difference within empty spaces
                cout << ' ';
            }
        }
            cout << endl;
        
    }
    
    return 0;
}