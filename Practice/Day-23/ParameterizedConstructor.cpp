#include <iostream>
using namespace std;

class hello{
    
    public :
        string name;
        int age;

    hello(string name, int age){
        
        this->name = name;
        this->age = age;

        cout << this->name << " " << this->age << endl;
    }
};

int main(){

    hello obj1("Kartavya",18),obj2("Krishn",17);

}