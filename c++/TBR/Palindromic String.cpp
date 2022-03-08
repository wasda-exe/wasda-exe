#include <iostream>
using namespace std;
// #################################### METHOD 2 ###########################################
bool isPal(string &sR)
{
    int i = 0;
    int j = sR.length() - 1;
    // can put <= instead, but will check 1 extra element in aba (middle, where you know will be same)
    // we can't just supply true condn cause loop will never terminate otherwise, so we can't return 1
    while (i < j)
    {
        if (sR[i] == sR[j])
        {
            ++i;
            --j;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    getline(cin, s);
    int n = s.length();

    cout << "String is plaindromic: " << isPal(s);

    //########################### METHOD 1 ######################################################
    // for (int i = 0; i < n; i++)
    // {
    //     if (s[i] == s[n - 1 - i])
    //     {
    //         if (i == n - 1)
    //             cout << "String is Palindromic";
    //     }
    //     else
    //     {
    //         cout << "String is Not Palindromic";
    //         break;
    //     }
    // }

    return 0;
}