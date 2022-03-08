#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    switch (ch)
    {
    case 'a':
        cout << "The character is a vowel.";
        break;
    case 'e':
        cout << "The character is a vowel.";
        break;
    case 'i':
        cout << "The character is a vowel.";
        break;
    case 'o':
        cout << "The character is a vowel.";
        break;
    case 'u':
        cout << "The character is a vowel.";
        break;
    case 'y':
        cout << "The character is a vowel.";
        break;

    default:
        cout << "The character is a consonant.";
        break;
    }
    return 0;
}