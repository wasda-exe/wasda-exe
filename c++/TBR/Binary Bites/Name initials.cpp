// Question 2
// 2105271 Ayyaan Alim (Wasda)
#include <iostream>
using namespace std;

int main() {
    int roll, space1, space2;
    string name;
    char a, b, c;

    cout << "Your roll number and name please: ";
    cin>>roll;

    getline (cin, name);

    a = name[0];
    space1 = name.find (" ");
    b = name[space1 + 1];

    space2 = name.find (" ", space1 + 1);
    c = name[space2 + 1];
    

    cout << "Ya roll number's " << roll << " and ya initials are " << b << " " << c;
    return 0;
}