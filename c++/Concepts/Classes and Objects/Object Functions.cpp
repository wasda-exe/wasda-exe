//OBJECT FUNCTIONS (aka instance functions)
//function that you put inside a class. different objects of that class can use to modify or find
//info on themselves
#include<iostream>
using namespace std;

class Heater{
    public:
    string body;
    string brand;
    int volume;
// a -->> argument
    Heater(string aBody, string aBrand, int aVolume){
        body = aBody;
        brand = aBrand;
        volume = aVolume;
    }
//power of this is that it takes values specific to a particular object, automatically, whenever call
//so you can define it right into the class and use it like a regular function but you don't even
// need to bother passing it any values

//if you even have to modify func, all the code will still work appropriatlely
    bool capacity (){
        if (volume >= 500){

        return true;
        }
    return false;
    }
};

int main(){
    Heater Oreva ("Plastic", "Oreva", 400);
    Heater Richard ("Metal", "Richard", 600);

    cout << Oreva.capacity() << endl;
    cout << Richard.capacity();
    return 0;
}