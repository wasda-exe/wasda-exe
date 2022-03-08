#include <iostream>
using namespace std;

void readLine(char *sRef)
{
    for (int i = 0;; i++)
    {
        // this bugged out because this caused some unintended side effects. only every alternate
        // char was actually printing because the condn checked and stored the other options.
        //, finally, since there is no new line, it doesn't terminate when it should and instead
        // spits out garbage
        //  if (cin.get() != '\n')
        if (cin.get() != '\n')
            *(sRef + i) = cin.get();
        else
            break;
    }
}

// void readLine(char s[]) // here, they directly input a char array element
// {
//     char ch = cin.get();

//     for (int i = 0;; i++)
//     {
//         if (ch != '\n')
//             s[i] = ch;
//         else if (ch == '\n')
//         {
//             s[i] = '\0';
//             break;
//         }
//         ch = cin.get();
//     }
// }

int main()
{
    char s[100];
    // cin >> s;
    // cout << s;

    // getline(cin, s);

    // readLine(s); ---> same in my process;
    readLine(s); // s, i'd assume, points to the first element of char arr. can even dereference it
    cout << s;
    return 0;
}