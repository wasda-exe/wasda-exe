#include <iostream>

using namespace std;

//creating a madlibs game. this is basically sasta cards against humanity.
int main()
{
    string colour, pluralNoun, name;

    cout << "enter a colour: ";
    getline(cin, colour);

    cout << "enter a plural noun: ";
    getline(cin, pluralNoun);

    cout << "enter a name: ";
    getline(cin, name);

    cout << "\nRoses are " << colour << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "My dear " << name << endl;
    cout << "I love you" << endl;

    return 0;
}
