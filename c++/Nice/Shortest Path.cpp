#include<iostream>
#include<cmath>
using namespace std;

int main(){
    //iterated in a similar manner to grid coordinates
    int north = 0, east = 0;
    
    //cin.get is outside, because I need to terminate this upon new line seen
    char ch = cin.get();
    while (ch != '\n')
    {
        switch (ch){
            case 'N':
            north ++;
            break;

            case 'S':
            north --;
            break;

            case 'E':
            east ++;
            break;

            case 'W':
            east --;
            break;

            default:
            break;

        }
    //need 2 of these since I need this too keep taking values, but it had to start somehow
    //BREAK reinitialized char within loop, this local overrode the previous definition        
        ch = cin.get();
    }
    int path = sqrt(pow(north, 2) + pow(north, 2));
    cout << "Shortest path is " << path << endl;

    cout << "Final displacement is " << north << " towards North and " << east << " towards east.";
    return 0;
}