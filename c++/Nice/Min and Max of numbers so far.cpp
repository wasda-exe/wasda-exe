#include<iostream>
#include<climits>
using namespace std;

int main(){

    int max = INT_MIN, min = INT_MAX, i = 1;

    while (true)
    {
        int num;
        cout << "\nInput an integer: ";
        cin >> num;

        if(!cin){
            cout << "Bad value!";
            break;
        }
        else
        {
            if(num >= max){
                max = num;
            }
            if(num <= min){
                min = num;
            }
                cout << "\tMaximum number so far is: " << max << endl;
                cout << "\tMinimum number so far is: " << min << endl;
            cout << "\tThis is iteration number " << i << endl;
            ++i;
        }
    
    
    }

    return 0;
}