#include <iostream>
using namespace std;

//     1
//    232
//   34543
//  4567654
// 567898765

int main()
{

    int n, j;
    cout << "How many lines do you want?: ";
    cin >> n;

    // note, I wanted to have i equal 1 in the beggining, thus, initialized i as 1
    for (int i = 1; i <= n; i++)
    { // analyse these as number of spaces, and number of times it will inc/dec, instead of
        // analysing positions
        for (int s1 = 0; s1 < n - i; s1++) // spaces
        {
            cout << " ";
        }

        // here, we have i numbers that increase i times
        for (j = 0; j < i; j++) // increasing numbers
        {
            cout << i + j;
        }

        // we utilise i + j, cos it just starts to decrease from there
        // here, number of decreasing numbers to print is i-1
        for (int k = 1; k < i; k++) // decreasing numbers
        {
            cout << i + j - k - 1;
        }
        cout << "\n";
        // scam, and not necessary
        //  for (int s2 = 0; s2 < n-i ; s2++)
        //  {
        //      cout << " " ;
        //  }
    }

    return 0;
}