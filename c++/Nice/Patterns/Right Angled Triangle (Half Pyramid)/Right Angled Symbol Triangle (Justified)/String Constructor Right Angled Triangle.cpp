#include <iostream>
// #include <string> --->> included by default

using namespace std;

void staircase (int n){
    for (int i = 0; i < n; i++)
    {
        string s (n - i - 1, ' ');
        string h (i + 1, '#');

        cout << s << h << endl;
    }
    
}

int main()
{
    int n;
    cin >> n;

    staircase (n);
    
    return 0;
}