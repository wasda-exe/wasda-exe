// 1. C++ program to enter month number and print month and number of days of
// that month
#include<iostream>
using namespace std;

int main(){
    int monthNum;
    cout << "Which month do you want to see?: ";
    cin >> monthNum;

    string monthName [] = {"","January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int monthDays [] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (monthNum < 1 || monthNum > 12)
    {
        cout << "Bad value!";
    }

    else
    cout << "Your month is " << monthName[monthNum] << ", which has " << monthDays[monthNum] << " days in it." << endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 1 + 7*i; (j <= 7 + 7*i) && (j <= monthDays[monthNum]); j++)
        {
            cout << j << " ";
        }
         cout << endl;
    
    }
    return 0;
}