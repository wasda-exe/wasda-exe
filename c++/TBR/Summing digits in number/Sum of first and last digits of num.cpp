#include <iostream>
#include <cstdio>
#include <cmath>
#include <climits>
using namespace std;

int main() {
    int num, sum, i, x;
    cout << "Enter a number" <<endl;
    cin >> num;
    //cpp implicitly converts entered floats into ints when storing the value in 'num'
    
    //!cin is to make sure a number is entered
   // if((num > INT_MAX) || (!cin)){}
// #include <cmath> (must use if you wish to access INT_MAX)
        //the above INT_MAX consideration is redundant because !cin triggers
        //whenever exceptions are met

    if(!cin){
            cout << "Bad value!";
            }

    else{
        for(i = 1; x != 0; ++i ){
            x = num / pow (10, i);
        }
        
        sum = (num % 10) + (num / pow(10, (i - 2)));
        cout << "The sum of the first and last digits of your number is : " << sum <<endl;
    }
    return 0;
}