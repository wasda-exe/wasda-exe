// Question 3 (Correct version, without arrays)
// 2105271 Ayyaan Alim
#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "How many lines would you like?: ";
    cin >> x;

    
    for (int i = 0; i < x; ++i){
        for (int j = 0; j <= i; ++j){
        
        cout << (char) ('A' + j) << " ";
        }
        cout << "\n";
    }
    
    return 0;
}