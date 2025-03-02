#include <iostream>
using namespace std;

class user{

    public:
        static int age;
        static int grid;

    static int set(int a, int g){
        age = a;
        grid = g;
    }

    static int get(){
        cout << age << " " << grid << endl;
    }
};

int user::age;
int user::grid;
// int user::hello

int main(){

    user prsn1, prsn2, prsn3;
    
    prsn1.set(33,9389);
    prsn1.get();
    
    prsn2.set(35,9339);
    prsn2.get();

    prsn3.set(30,8399);
    prsn3.get();
    
}