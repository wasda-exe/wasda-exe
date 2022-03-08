#include <iostream>
#include <cstring>
using namespace std;

// #################################### METHOD 2 ###########################################
/*string removeDup(string sR)
{
    int i = 0;
    int j = sR.length() - 1;
    int k = 0;
    string sNew;

    for (i; i <= j; i++)
    {
        if (sR[i] != sR[i + 1])
        {
            sNew[k] = sR[i];
            cout << sNew[k];
            // we don't actually need any of this stuff, because we're only assigning pre checked vals
            //  if (sR[i + 1] != sNew[k])
            //  {
            //      k++;
            //      cout << sNew[i];
            //  }
        }
    }
    return sNew;
}*/

//########################### METHOD 1 (FAIL) #############################################

// void remDup(char a[]) // by default these can be passed normally, cos they're pointers
// {
//     int end = strlen(a) - 1;
//     // cout << end;
//     int i = 0;
//     // cout << a[i] << endl;
//     // cout << a[i + 1] << endl;

//     // this next if doesn't hold true
//     if (a[i] == a[i + 1])
//     {
//         // cout << "weird";
//         for (int j = i; j <= end; j++)
//         {
//             if (a[j] != a[i])
//             {
//                 a[i] = a[j];
//                 continue;
//                 // cout << "burh";
//             }
//         }
//         i++;
//     }
// }
//########################### METHOD 3 #############################################

string remDup(char a[])
{
    int end = strlen(a) - 1;
    // there are strlen(a) loops to be calc for full
    int i = 0;

    // you had to div the sum into 2 distinct parts, only one of which checks the whole thing
    // you had to recognise that you only had to increment i when the condn held true
    // never needed two loop. just one
    for (int j = 0; j <= end || a[j] == '\0'; j++)
    {
        if (a[j] != a[i])
        {
            a[i + 1] = a[j];
            i++;

            // either method is acceptable, though mine is the top one
            //  i++;
            //  a[i] = a[j];
        }
    }

    // for (int i = 0; i <= end; i++)
    // {
    // for (int j = 1; a[i] == a[i + 1]; j++)
    // {
    //     if (a[j] != a[i])
    //     {
    //         a[i + 1] = a[j];
    //         i++;
    //         // continue;
    //     }
    // }
    // }
}

int main()
{ // for method 2
    // string s;
    // getline(cin, s);

    // cout << removeDup(s);

    char a[1000] = {};
    cin.getline(a, 1000);

    remDup(a);

    cout << a;

    return 0;
}