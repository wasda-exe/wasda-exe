// 2105271 Ayyaan Alim (Wasda)
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, neg;
    float b;

    cout << "Your negative number, please:";
    cin>>a;
    cout << "Your decimal number, please:";
    cin>>b;

    neg = fmin (a, -a);

    cout << "Your negative number is " << neg << " and your decimal number is " << b << ".\n:-)" << endl;

    return 0;
}