// Question 4 (Correct version, without arrays)
// 2105271 Ayyaan Alim
#include <iostream>

using namespace std;

int main()
{
    int a, b, temp;
    cout << "Enter value of A: ";
    cin >> a;
    cout << "Enter value of B: ";
    cin >> b;

    temp = a;
    a = b;
    b = temp;

    // temp stores the value of a. temp is not a reference variable of a.
    // temp and a are not the same variable. its just so happens that they store the same value
    // because we made temp store a value equal to the value of a using the "=" operator
    // (My conception isnt razor sharp on this yet, but this is how it seems to me at the moment)

    // I even found an awesome method that uses no temp variable in calculation. looks like this:
                // a = a*b;
                // b = a/b;
            // dividing a's value (ab), by the new value of b, which is just the old value of a.
            // once you have any one of the 2 swapped, then you conveniently get the other (swapped) number
            // by dividing the product of the two numbers by the swapped variable
            // to get the other variable's value swapped
                // a = a/b;
    // works on the same concept of storing values instead of being the same variable
    // 

    cout << "You must be mistaken; A is " << a << " and B is " << b << ", right? Press 'Enter' if you want me to try again...";
    cin.ignore();
    cin.ignore();
    a = a*b;
    b = a/b;
    a = a/b;
    cout << "If you insist.. Sure, A is " << a << " and B is " << b << " ... Happy now?!? Tormenting a program like me!!" << endl;
    return 0;
}
