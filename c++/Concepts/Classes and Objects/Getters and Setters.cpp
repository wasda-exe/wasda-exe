//OBJECT FUNCTIONS (aka instance functions)
//function that you put inside a class. different objects of that class can use to modify or find
//info on themselves
#include<iostream>
using namespace std;

class Heater{
    private:
    int volume;
    string body;
    //we can leverage pub and pri to limit the values that a particular parameter within the class
    //can take

    public:
    string brand;
// a -->> argument
//the constructor can access code under private access modifier. code within private is accessible
//within the same class. but it can't be accessed outside the class. eg, code in main can't access
    Heater(string aBody, string aBrand, int aVolume){
        setBody(aBody);
        brand = aBrand;
        volume = aVolume;
    }
//power of this is that it takes values specific to a particular object, automatically, whenever call
//so you can define it right into the class and use it like a regular function but you don't even
// need to bother passing it any values

//if you even have to modify func, all the code will still work appropriatlely
//object function,
    bool capacity (){
        if (volume >= 500){

        return true;
        }
    return false;
    }

//getters and setters basically allow us to limit the legal values that we can create an object to hold

    //setter function
    void setBody (string aBody){
        if (aBody == "Plastic" || aBody == "Metal")
        body = aBody;
        else
        body = "Unknown";
    }
//getter function
// doesn't need to take parameters as it simply returns the value
    string getBody (){
        return body;
    }

};

int main(){
    Heater Oreva ("Plastic", "Oreva", 400);
    Heater Richard ("Metal", "Richard", 600);
    Heater Supreme ("Gold", "Supreme", 690);

    // cout << Oreva.volume;

    Supreme.setBody ("Rose Gold");
    cout << Supreme.getBody() << endl;
    // Supreme.volume = 420;
    cout << Oreva.capacity() << endl;
    cout << Richard.capacity();
    return 0;
}