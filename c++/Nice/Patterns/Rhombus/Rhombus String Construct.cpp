#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    //BREAK mind the greater change and increment
    for (int i = n; i >= 1; i--)
    {
        string a(n, '*');
        string s(i - 1, ' ');
// mind order of the 2 str
        cout << s << a << endl;
        }
    
    return 0;
}