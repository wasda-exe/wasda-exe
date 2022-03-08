#include <iostream>
using namespace std;

bool isPal(string s, int i)
{
    int j = s.length() - i - 1;

    if (s[i] != s[j])
    {
        return false;
    }

    if (i >= j)
        return true;

    // make sure this is i + 1. Don't accidentally decrease it by 1
    return isPal(s, i + 1);
}

int main()
{
    string s;
    cin >> s;

    cout << "The string is palindromic: " << isPal(s, 0);
    return 0;
}