#include<iostream>
using namespace std;

int main(){
    int age = 19;
    // if we want to manage or access the memory, we can create a variable where we store the pointer
    // this variable, where we can conveniently store and keep track of the memory addresses, may
    // be created, and this variable which stores pointer values that point to memory addresses
    // on physical memory (ram), is called a "pointer" variable
    //container to store pointer ie container to store memory address --> pointer

    //theres no real utility of accessing random memory addresses, so generally, we'll
    // be managing and using the pointers (memory addresses) of variables that are in use, by us

    //one may confuse this shit with reference variables. that is no coincidence.
    // in fact, reference variables arise from the concept of two defined variables sharing the
    // same memory addresses, ie, 2 declared variables pointing to the same memory address
    // ie, a variable is declared as a reference to an already existent variable, which then means
    // that this declared variable is an alternative name for the previously defined variable.

    // one may declare a variable as a reference of another variable by utilising:
    //     int & ref = x; or int& ref = x; or int &ref = x;

    // on the contrary, pointer variables are declared by
    // int * name (usually pName) (this is a pointer variable);
    // & age
    // int *pAge = &age; or int * age = & age;
    // as you can see, theres a lot of flexibility when it comes to the declaration of variables as
    // references and the creation of pointer variables of a particlar type of variable.
    int  *pAge = &age;
    //POINTERS CAN BE ACCESSED USING &var
    // double  *pAge = &age;
    // a value of type int cannot be utilised to initialize an entity of type "double"
    //ie, an int pointer, must store the memory address of an int variable
    //ie, an INT POINTER VARIABLE MUST STORE THE POINTER OF AN INT VARIABLE
    float cgpa = 4.8;
    string bruh = "bruh moment";
    string & max = bruh;
    // reference variable must be of same data type
    //references cannot be rebound, and must be bound at initialization

    // computer has to access it using memory address
    // even though i can conveninetly interact with the values stored at these memory addresses
    // by utilising the variable names that I assign these stored values

    // we can access this memory address, stored in ram. pointer is a data type, that stores a value
    // these memory addresses are called "pointer" (the weird 0x61fee8 thing)
    // A POINTER (VARIABLE) STORES A REFERENCE TO ANOTHER VALUE

    //PTR variable references a varible called "pointee"


    cout << &age << endl;
    cout << &cgpa << endl;
    cout << &bruh << endl;
    cout << &max << endl <<endl;

    // one have to use * when declaring a pointer variable, kinda like an array (kinda also not)
    //after declaration of a var as a ptr, we may then utilise it like any other variable in program
        //prints memory address of age, that's stored in pAge
    cout << pAge <<endl;

    //POINTER VARS THEMSELVES HAVE A POINTER, WHERE THAT POINTER VARIABLE IS STORED
    cout << &pAge << endl <<endl;

    //DEREFERENCING A POINTER --->> GRABBING THE VALUE STORED AT A PARTICULAR MEM ADDRESS
    // a pointer is an address, a place where stuff will be stored
    cout << *pAge << endl << endl;

    //dereferencing a memory address
    cout << * &cgpa << endl;

    // this doesn't exist, you're not declaring a ptr variable here
    // but also, you're not really dereferencing anything, cgpa is not a pointer variable
    // cgpa doesn't store a ptr (memory address) of anything, so what will you even try and deref?
    // cout << & *cgpa << endl; [ERR]

    //"operand of '*' must be a pointer but has type \"int\"",
    // cout << * (0x61ff00) << endl; [ERR]


    //you can chain these together, not that you'd wanna
    //here, you'd get the memory address again
    cout << & * & cgpa << endl;

    return 0;
}