#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    int num, a , b, c, d;
    cout << "Enter 4 digit number" <<endl;
    cin >> num;

    a = num/1000;
    b = num/100 - 10*a;
    c = num/10 - 100*a - 10*b;
    d = num - 1000*a - 100*b - 10*c;

    cout << "The sum of the first and last digits of c is : " << a + d;
    
    return 0;
}