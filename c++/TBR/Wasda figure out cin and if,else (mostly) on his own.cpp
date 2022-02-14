#include <iostream>

using namespace std;

int main()
{
    cout << "Your age?" << endl;
    int userAge;
    cin >> userAge;


if(userAge>40){
    cout << "So, you're telling me, you've been ugly for " << userAge << " years, and no one noticed??" << endl;
}

else{
    cout << "Nah, it's fine, if you are " << userAge << " years old, you're not ugly" << endl;
}

    return 0;
}
