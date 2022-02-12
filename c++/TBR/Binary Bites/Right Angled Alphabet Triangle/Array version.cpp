// Question 3 (Wrong Answer)
// ANY IDEA WHAT WENT WRONG. TRIED USING ARRAYS HERE BUT ITS LOOPING ON FOREVER.
// well anyways, the other approach worked when i didnt bother using arrays
// dont know exactly why this didnt however :)
#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "How many lines would you like?: ";
    cin >> x;

    // ascii for 'A' is 65
    char arr[] = {};
    for (int i = 1; i <= x; ++i){
        for (int j = 0; j <= x; ++j){
        arr [j] = 65 + j;
        cout << arr[j] << " ";
        }
        cout << "\n";
    }
    
    // arr[0] = 65;
    // // arr[1] = 66;
    // // cout << arr[x];
    // cout << arr;

    return 0;
}