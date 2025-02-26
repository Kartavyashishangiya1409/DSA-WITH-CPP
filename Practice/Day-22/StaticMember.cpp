#include <iostream>
using namespace std;

class Member{

    public:
        static string name;
        static int age;

};

string Member::name = "Kartavya";
int Member::age = 18;

int main(){

    cout << "this is the method of accessing static member" << endl;
    cout << "(1) Name : " << Member::name << endl;
    cout << "    Age : " << Member::age << endl;

    
}