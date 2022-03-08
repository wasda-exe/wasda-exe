#include <iostream>
using namespace std;

int arm(int n)
{
    int dig, ans;
    if (n != 0)
    {
        // assign last digit of n for raising and summing
        dig = n % 10;
        // eliminate last digit
        n = n / 10;
        // very similar to the digit counter
        return (dig * dig * dig + arm(n));

        // ULTRA EFFICIENT VIA CMATH
        //  if (n > 0) or (n != 0)
        //  return (pow(n%10, 3) + arm(n/10))
    }
    // unnecessary to put return 0 in this case as this function returns 0 by default when left unspecified
    // return 0;
}

int main()
{
    int n;
    cin >> n;
    if (arm(n) == n)
    {
        cout << "The number is an armstrong number.";
    }
    else
        cout << "The number is not an armstrong number.";

    return 0;
}