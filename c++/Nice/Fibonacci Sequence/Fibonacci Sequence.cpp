#include <iostream>
using namespace std;

//so many iterations of this stupid fucking program. total about 2-3 hrs
//fucked with commas for 30min. no mo comma, but idgaf: it looks sleek
//Fibonacci definitions either assign 0 n=0 or n=1. i assume 0 => n=1.

int main()
{
    int a[100] = {0 , 1};
    int x;
    cout << "How many Fibonacci numbers would you like: ";
    cin >> x;

    //this !cin negation thing is very interesting
    if(!cin){
            cout << "Bad value!";
            }

    //the problems occurred here. sacrifices b/w including 0, 1 or last vals
    //solved by simply picking one or the other, not both simultaneously
    //switches were also attempted but didn't work because i don't if/how
    //to give cases more complex args, though this soln is more elegant
    //other solution was infinitely more clunky
    else{
            for(int i=2; i<x ; i++)
            {
            a[i] = a[i-1] + a[i-2];
            cout << a [i-2] << " ";
                        }
    cout << a[x-3] << " " << a[x-1];
    }

    return 0;
}
