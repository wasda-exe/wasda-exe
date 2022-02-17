#include<iostream>
using namespace std;

int main(){
    int i, j, n, a = 0, b = 1, sum = 0, temp;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            //we're only printing first (comes earlier) nums of each pair
            cout << a << ' ';
            //the 3rd var (a is 1st and b is 2nd) should hold b
            //but after modification, 3rd var becomes the second var, and the prev b gets
            // to print as a, and the prev b, in this modified setup, gets to take the val of sum
            //from prev part, b4 becoming a and printing.
            sum = a + b;
            //now we must the second number as the first number
            temp = b;
            b = sum;
            a = temp;
        }
        cout << endl;
    }
    
    return 0;

}