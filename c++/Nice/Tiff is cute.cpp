#include <iostream>

using namespace std;

int main()
{
    //Create para parameter
    string para = "Tiffany is an exceptionally cute girl. Tiffany's cuteness is only amplified by her small frame and the fact that Tiffany is only a few inches taller than 5 feet. Most of all, Tiffany's cuteness arises from her absolutely adorable personality. Gosh, I just wanna cuddle her and tell her how beautiful she is.";

    // Create len parameter
    int len = para.length();

    // Program to identify the index of each instance of her name and print, without repetition of any position
    for(int i=0; i < len; i++)
    {
            // pos = first instance of "Tiffany" starting from 'i' index position. will be same for many i.
            int pos = para.find("Tiffany" , i);
            bool s = (pos != para.find("Tiffany" , i+1));
            // above 2 lines check when 'pos' will not have same value for the succeeding index value (concurrently index value case of the next cycle)
            // != holds true iff operands don't have the same value; pos != pos (next i)
            // i.e. 'pos' must be the last unique valued answer

            // we could maybe instead try and take the first unique value of pos as output instead
            // by substituting '+' for '-', but a '-1' turns up because when cpp can't find any instances of search term
            // it spits out string::npos. in fact the printed '-1' is the first instance of string::npos
            // by using '+', we check repetition with next changed pos, but for npos never again will the pos change
            // thus because it never changes again and pos only gets printed when pos changes
            // (and it'll print the pos for the last index before pos changes)
            // all the '-1's never get the opportunity to get printed. I think.....

            // allow pos to be printed only if satisfied above condition. == true iff operands have same value. not tough part.
            if( s == true ){
                cout << pos << "\n";
            }
            else{
            }
    }

    return 0;
}
