#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        //BREAK POINT setw requires INPUT + 1 since it takes width (including) not dist b/w
        //2 points. this means you've always gotta give setw one more.
        //yet, setw(0), doesn't do anything, since it fills spaces to match a certain width
        //it won't add negative spaces and start deleting stuff, i think :)
        cout << setw(n - i + 1);
        for (int j = 1; j <= i; j++)
        {
            cout << '*';
        }
        
        cout << endl;
    }
    
    return 0;
}