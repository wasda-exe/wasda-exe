#include<iostream>
using namespace std;

int main(){
    int n, i;
    //preemptively global def of i
    cin >> n;
//fibb seq really like they're initializations. lists in general do actually.
//that's why they constrained the value of n in the problem from 0 < n < 100
//so that we could make the array or use similar method
    int a[100] = {};
    a[0] = 0;
    a[1] = 1;

    for (i = 2; i < 100; i++){
        //no condn for i> 1 necessary in separate if, since we start from 2
    a[i] = a[i - 1] + a[i-2];
    }// for debug. verify correctness of seq
    // cout << a[0] <<a[1]<<a[2]<<a[3] <<a[4]<<a[5];
    int num = 0;

    for (i = 0; i < n; i++)
    {
            // cout << "vruh";
    //this is not iterating for i loops. it iterates for i + 1 loops. The reason is that
    //for each line, number of elements will be 1 more than number of that line
    //this is because we consider that i starts from 0, (so 1st line will have 1 e but 0tjh line)
        for (int j = 0; j < i + 1  ; j++)
        {
            // cout << "nruh";
            
            //coords not coming well, that's why had to iterate an outsider and tally with that
            cout << a[num] << ' ';
            num ++;
            // cout << "nruh";
            }
        cout << endl;
    }
    
    return 0;
}