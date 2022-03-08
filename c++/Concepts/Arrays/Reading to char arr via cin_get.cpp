#include <iostream>
using namespace std;
//####################################METHOD 1 #######################################################
// void readLine(char *sRef)
// {
//     for (int i = 0;; i++)
//     {
//         // this bugged out because this caused some unintended side effects. only every alternate
//         // char was actually printing because the condn checked and stored the other options.
//         //, finally, since there is no new line, it doesn't terminate when it should and instead
//         // spits out garbage
//         //  if (cin.get() != '\n')
//         char c = cin.get();
//         if (c != '\n')
//             *(sRef + i) = c;
//         else if (c == '\n')
//         {
//             *(sRef + i) = '\0';
//             break;
//         }
//     }
// }

//#################################### METHOD 2 #######################################################
void readLine(char s[]) // here, they directly input a char array element
// by this logic, s[] is also a memory address. actually, that is correct
// what's happening is that a char array is being declared within the formal parameters of this method
// then, since this is an array that is being taken as arg, all arrays are pointer variable
// thus, we infact utilise pointers here as well, to pass by reference, just it's automatically assumed
// (in some sense), in the case of array being passed to function. That's why you may not have to worry
// about the problem of pass by val or ref in the case of passing arrays

{
    char ch = cin.get();

    for (int i = 0;; i++)
    {
        if (ch != '\n')
            // s[i] is the value of the ith variable, which is stored at s + i
            //  and has value s[i] == *(s + i)
            // adv of this --> we get to limit ourselves to screwing with values, not ptrs
            s[i] = ch;
        else if (ch == '\n')
        {
            s[i] = '\0';
            break;
        }
        ch = cin.get();
    }
}

int main()
{
    char s[] = {};
    // cin >> s;
    // cout << s;

    // getline(cin, s);

    // readLine(s); ---> same in my process;
    readLine(s); // s, i'd assume, points to the first element of char arr. can even dereference it
    cout << s;
    return 0;
}