#include <iostream>
using namespace std;

class hello{
    
    public :
        string name;
        int age;

    hello(){
        cout << this->name << " " << this->age << endl;
    }
};

int main(){

    hello obj1,obj2;

    obj1.name = "Kartavya";
    obj1.age = 18;

    obj2.name = "Krishn";
    obj2.age = 17;
}