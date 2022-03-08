#include <iostream>
#include <vector>
using namespace std;

template <class T>

void display(vector<T> &v)

{
    cout << "Displaying this vector" << endl;
    for (int j = 0; j < v.size(); j++)
    {
        // cout << endl;
        cout << v[j] << ' ';
        // cout << v.at(j) << ' ';
    }
    cout << "Bruh" << endl; // iterator is a member of std::vector<int>, not iter
    for (vector<int>::iterator itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << ' ';
    }
    cout << "Bruh" << endl;
    for (auto itr = v.begin(); itr != v.end(); itr++) // auto allows for typeinference
    {
        cout << *itr << ' ';
    }
}

int main()
{
    vector<int> bruh;          // 0 length integer vector
    vector<char> bruh2(4);     // 4 element character vector
    vector<char> bruh3(bruh2); // 4 element character vector from bruh2
    vector<int> b(6, 3);       // 6 element vector of 3s
    // basically, this creates a vector of size 6, where each element is initialized with val '3'

    display(b);

    // bruh.push_back(69); // adds one element to end of vector and copies arg into that element
    // bruh2.push_back('n');

    // display(bruh2);
    // display(bruh3);

    // int ele, size = 5;

    // cout << "Size of vector: ";
    // cin >> size;

    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter your element: ";
    //     cin >> ele;
    //     bruh.push_back(ele);
    // }

    // display(bruh);
    // bruh.pop_back(); //REMOVES THE LAST ELEMENT AND REDUCES SIZE OF VECTOR BY 1
    // ITERATOR CONSTRUCTION. like a pointer
    // vector<int>::iterator iter = bruh.begin(); -->> viable
    // iterator iter = bruh.begin(); -->> not viable
    // bruh.insert(iter + 1, 4, 553); //INSERTS BEFORE ITER POSN, 4 TIMES, NUM 553 ( HERE, INT)

    // display(bruh);

    return 0;
}