#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a , b , c;

    cout << "First Number?\n";
    cin >> a;
    cout << "Second Number?\n";
    cin >> b;
    cout << endl;

    c = fmin( a , b );
    if( c == a ){
        cout << setprecision(9) << b << " is larger." << endl;
    }
    else{
        cout << setprecision(9) << a << " is larger." << endl;
    }

    return 0;
}
