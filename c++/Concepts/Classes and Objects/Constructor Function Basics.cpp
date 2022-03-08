#include<iostream>
using namespace std;

//this is a class. It serves as a blueprint. It is a user defined data type that stores certain data
// as usual. Nothing really new here. The advantage, really, is the grouping and functions and
//possible attributes that we might be able to unlock with the help of classes
class Book {
    public:
    // string title = "Can't hurt me.";
    // string author = "David Goggins";
    // int pageNum = 351;
    // float weight = 0.5 ;
    // bool power = true;
    string title;
    string author;
    int pageNum;
    // this is a constructor function, that will now be called whenever we create a book object
    //method aka function. Can accept parameters
    
    
    Book(string aTitle, string aAuthor, int aPageNum){
        //i.e., the title of the object that you wish to initialize
        title = aTitle;
        author = aAuthor;
        pageNum = aPageNum;
    }
    //YOU CAN CREATE MULTIPLE CONSTRUCTOR FUNCTIONS

    Book (){
        title = "no title";
        author = "no author";
        pageNum = 0;
    }
};

int main(){
// book1, is a variable of data type class. (note that all variables are objects, actually, of their
// respective type)   book1 is an instance of class book
//constructors are awesome because they are deployed whenever

//we can actually use the constructors to initialize our objects with dif values
    Book book1("Can't hurt me.", "David Goggins", 351);
    // you can still modify these even after implementing cons func
    // book1.title = "Navy Seal";
    Book book2("12 Rules for Life", "Dr. Jordan Peterson", 400);

//don't give it brackets
    Book book3;
    // Book book2("Jordan");
    // book2.title = "12 Rules for Life";
    // book2.author = "Dr. Jordan Peterson";
    // book2.pageNum = 400;

    // cout << book1.title << endl;
    // cout << book2.author;
    cout << book3.title;
    
    return 0;
}