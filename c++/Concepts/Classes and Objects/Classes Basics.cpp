// 1. C++ program to enter month number and print month and number of days of
// that month
#include<iostream>
#include<list>
#include<iomanip>
using namespace std;

class workstation {
    public:
    string tableMaterial;
    int drawerNum;
    bool drawerFull;
    int notebookNum;
    list <string> stationary;

};

int main(){
    workstation myTable;
        myTable.tableMaterial = "wood/metal";
        myTable.drawerNum = 3;
        myTable.drawerFull = true;
        myTable.notebookNum = 2;
        myTable.stationary = {"pen", "pencil", "eraser", "ruler", "highlighters", "whitener"};

    cout << "Material: " << myTable.tableMaterial << endl;
    cout << "Number of drawers: " << myTable.drawerNum << endl;
    cout << "Are the drawers full?: " << boolalpha << myTable.drawerFull << endl;
    cout << "Number of notebooks : " << myTable.notebookNum << endl;

    cout << "Stationary on top of table:" << endl;

    int i = 0;
    for(string Table: myTable.stationary){
        ++i;
        cout << i <<".\t" << Table <<endl;
    }
    return 0;
}