#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
    stringstream oss(str);
    vector<int> vec;
    int n;
    char ch;
    // serves the purpose to check whether the o/p is a number. side effect stores int val into n
    for (int i = 0; oss >> n; i++)
    {
        // to store the commas as a discarded entity
        oss >> ch;
        // it doesn't like it when I don't use it like a condtion (the oss >> n bit)
        vec.push_back(n);
    }
    return vec;
}

int main()
{
    string s;
    getline(cin, s);

    vector<int> arr;
    arr = parseInts(s);

    for (int j = 0; j < arr.size(); j++)
    {
        cout << arr[j] << endl;
    }

    return 0;
}
