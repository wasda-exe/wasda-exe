#include<iostream>
// #include<cmath>
using namespace std;

int main(){
    // a = pow (n, 0.5);
    // cout << a;
    // return 0;

    int n, p;
    float ans, inc;

    cout << "Number? : ";
    cin >> n;
    cout << "Precision (Number of decimal places)? : ";
    cin >> p;
    //there are p decimal places in ans (1, 2..(just need run once) place for int, p places of decimal)
    ans = 0;
    inc = 1.0;
    //made a mistake here by initializing within the for loop, destroying my updation

    //the logic of this sum involves BREAKING IT INTO PARTS and analysing how to solve for each part
    //  here, there are two parts. calculate int, for which inc is just taken 1 (unchanged)
    //  and decimal calculation, for which you must then start updating the inc value.

        //this is iterated p + 1 times, as the loop haas to run once to find the integer, at least
        // i.e., there has to be at least one loop for p = 0, as well, that means we have to set
        // possible equality (intuitive starting from 0, because then times = decimal being calculated)

        // i.e., for 3 decimal places, you have to first run the loop for the 0th time to get int
        // then 1 times for first place of decimal, upto and equal to 3 times for the 3rd place

    //the internal while loop is created first, because it involves incrementing ans until it
    //shoots over n. outside (else we'll undo progress), must substract 1 inc, to prevent overshoot

    for ( int times = 0 ; times <= p ; times++ ){

        //while contains an increment. the equality exists to make sure that ans overshoots n for all p
        // if we were ensured that n would always be a non perfect square, we would'nt need equality
        // try removing the equality and test for p = 1 for any perfect square. will give you one less
        //than expected result. If p were greater than 0, this error would be hidden because for p=1,
        //increments will fill ans till expected result is reached.
        // tldr, equality exists to ensure conformity making overshoot certain, even for int
        while ( ans*ans <= n){
            ans = ans + inc;
        }
        ans = ans - inc;
        inc = inc/10;
    }
    cout << ans << endl;
    
    return 0;
}