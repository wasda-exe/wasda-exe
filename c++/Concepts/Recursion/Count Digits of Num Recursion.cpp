#include <iostream>
#include <cmath>
using namespace std;
// ################### METHOD 2 (INEFF) ####################################
// int dig(int a, int d)
// {

//     if (a / 10 != 0)
//     {
//         d++;

//         return dig(a /= 10, d);
//     }
//     else
//         return d + 1;
// }

// ############### METHOD 3 (EFF) #####################

// stringstream oss;
//     oss << a;
//     string s;
//     oss >> s;

//     cout << s.length();

// ############### METHOD 1 (EFF) #####################
int dig(int a)
{
    if (a / 10 == 0)
    {
        return 1;
    }
    return 1 + dig(a / 10);
}

int main()
{
    int a;
    cin >> a;

    cout << dig(a);
}