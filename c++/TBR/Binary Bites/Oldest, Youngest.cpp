// 2. WAP to input the age of 3 people and find the oldest and youngest among them.
#include<iostream>
#include<cmath>
using namespace std;

int max(int a, int b, int c){
    int max;
    max = fmax(fmax(a, b),fmax(b, c));
    return max;
}
int min(int a, int b, int c){
    int min;
    min = fmin(fmin(a, b),fmin(b, c));
    return min;
}


int main(){
    // int a, b, c;
    // cout << "Input age of first person: ";
    // cin >> a;
    // cout << "Input age of second person: ";
    // cin >> b;
    // cout << "Input age of third person: ";
    // cin >> c;

    int age [] = {};

    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter age of person " << i << endl;
        cin >> age [i];
    }

    cout << "\nThe oldest among them is " << max(age [1], age [2], age [3]) << " years old." << endl;
    cout << "The youngest among them is " << min(age [1], age [2], age [3]) << " years old." << endl;

    return 0;
}