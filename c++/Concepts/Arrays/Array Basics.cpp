#include<iostream>
using namespace std;


// void findGreaterSmaller(int a, int b, int arr[])
// {
  
//     // Store the greater element at
//     // 0th index of the array
//     if (a > b) {
//         arr[0] = a;
//         arr[1] = b;
//     }
//     else {
//         arr[0] = b;
//         arr[1] = a;
//     }
// }

int main(){
    
    int x = 2, y = 2, alpah;
    int arr[3] = {69,420,1337};
    int *p0, *p1, *p2;

    p0 = arr;
    // p0 = &arr; -->> wrong as arr itself is a pointer
    //HOWEVER, &arr itself is not wrong, its just that. &arr is an alias for &arr[0]
    //and returns the address of the first element of the array.
    //NOTE: arr itself is a pointer. &arr[0] is also a pointer
    //however, &arr is considered ok and not the address of a pointer, instead, it is an alias of
    // &arr[0], makes intuitive sense, as it gives address of first element
    //however, this cannot be assigned to a pointer
    // "a value of type \"int (*)[3]\" cannot be assigned to an entity of type \"int *\""


    // an array is actually a pointer that references the first element of that array
    // the array variable is a pointer, and you can do all the regular operations of a ptr with it
    // you can dereference an array and that will yield the address of the first element of that arr
    p1 = arr + 1;
    p2 = & arr[2];

        /*int *p;
        p = marks
        p++;    ---->> this will increment the address to the address of the next contiguous address
        *p == marks[1]
        
        p++;    ---->> this will increment the address to the address of the next contiguous address
        *p == marks[2]

                i.e.
                *(p++) = 420;
                *(p++) = 1337;


        */
    cout << p0 << endl;
    cout << p1 << endl;
    cout << p2 << endl <<endl;

    cout << *arr << endl;
    //moreover a[i] == * (a + i)
    cout << *(arr + 1) << endl;
    //POINTER ARITHMETIC
    //      (address)new = (address)curr + i * sizeof(datatype)
    //where,  (p + i)           pi 
    // this continguous nature of the memory locations of the items stored within the array variable
    // is demonstrated in the first 3 lines of running this program
    // arrays are pointer variables are pointer variables and the array references the first element

    //proof of the above comment
    for (int i = 0; i < 5; i++)
    {
        if ( arr[i] == *(arr + i) ){ //        <<<------- MOST IMPORTANT CONCEPT IN ARR-PTR RELATION
            cout << "bruh";
        }
    }

    //this is incorrect
    // cout << * (arr++) <<endl;
    //this is incorrect because array variable cannot be assigned a value
    //however, pointers may be assigned a value
    cout <<endl;
    cout << &arr <<endl;
    cout <<endl;
    cout << * (p0++) <<endl;
    cout << * (p1++) <<endl;
    cout << * (p2++) <<endl;
    
  
  
    // findGreaterSmaller(x, y, arr, alpha);
    // cout << "greater " << arr [0];
    return 0;
}