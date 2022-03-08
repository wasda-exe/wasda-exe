#include <iostream>
#include <cmath>
using namespace std;
// print all prime factors of a number 24 ---> 2 2 2 3
void primeFactors(int n)
{ // efficiency increase. get all 2 multiples out so that we can later iterate 2 each time
    while (n % 2 == 0)
    {
        // print the number of 2s that divide n
        cout << 2 << ' ';
        n /= 2;
    }

    // n myst be odd at this point so we can iterate by 2 values each time
    for (int i = 3; i * i <= n; i += 2)
    {
        // while i divides n, print i and divide by i
        while (n % i == 0)
        {
            cout << i << ' ';
            n /= i;
        }
    }
    // case when new n value will not be covered within sqroot. this will always be prime
    if (n > 2)
    {
        cout << n << ' ';
    }
    // I don't understand the part At this point z = 13, and z * z = 169, which is larger than 29, so 29 is prime and is the
    // final factor. Could you elaborate? How did you conclude here that 29 is prime?
    //  // @Danijel: If n is composite, then it must have at least two factors, so say n = p * q, and to make things concrete,
    //   say p < q. Now p must be less than the square root of n, and q must be greater that the square root of n. In this case,
    //    since we've already considered all potential factors less than the square root of n (since z * z > 29),
    //    there can be no factor less than 29, no p can possibly exist, therefore 29 must be prime.
}

int main()
{
    int n;
    cin >> n;
    primeFactors(n);
    return 0;
}