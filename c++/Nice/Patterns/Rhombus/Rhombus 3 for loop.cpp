#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = n; i >= 1; i--)
    {// main concept is that you had to look at this like in 2 completely separate objects
    // (kinda)
        for (int j = i - 1; j >= 1; j--)
        {
            cout << ' ';
        }
        for (int j = n; j >= 1; j--){
            cout << '*';
        }
        cout << endl;
    }
    
    return 0;
}