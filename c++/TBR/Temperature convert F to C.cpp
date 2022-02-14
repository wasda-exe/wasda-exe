#include<iostream>
using namespace std;

int main(){
    float f = 0, c, x;
    cout << "How many temperatures would you like to convert to Celsius? : " << endl;
    cin >> x;

    cout << "The temperature comparison table:" << endl;
    for (int i = 0; i < x; i++)
    {
        f = i*20;
        c = 5.f / 9.f *(f - 32);
        
        cout << "\t" << f << "\t" << int(c) << endl;
    }
    
    return 0;
}