#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int r, c;
    cin >> r >> c;

    for (int i = 0; i < r; i++)
    {
        if( i == 0 || i == r - 1){ //print all stars for 1st and last lines
        for (int j = 0; j < c; j++){
                cout << '*';
            }
        }else{ // print lines between first and last
                cout << '*' << setw (c - 1) << '*'; // c-1 and not c-2 because we havent reached
                }
        
        cout << endl;
    }
    
    return 0;
}