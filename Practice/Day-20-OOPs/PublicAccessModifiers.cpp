// 01-Data-Abstraction
// --> Access Modifiers

#include <iostream>
using namespace std;

class student{

    // this is an example of Public Access Modifier   
    
    public:
    string name;
    int age;
};

class person{

    // this is an example of Private Access Modifier   
    // generally every class is defaultly set as Private 

    string name;
    int weight;
    // person obj;
    // obj.name ="vinit";

};
int main(){

    student student1;
    student1.name = "Kartavya";
    student1.age = 18;

    student student2;
    student2.name = "Vinit";
    student2.age = 21;

    student student3;
    student3.name = "Krishn";
    student3.age = 17;

    student student4;
    student4.name = "Aum";
    student4.age = 20;

    student student5;
    student5.name = "Rutvik";
    student5.age = 21;

    student student6;
    student6.name = "Prince";
    student6.age = 19;

    cout << "Name       " << "Age" << endl << endl;
    cout << student1.name << "   " << student1.age << endl;
    cout << student2.name << "      " << student2.age << endl;
    cout << student3.name << "     " << student3.age << endl;
    cout << student4.name << "        " << student4.age << endl;
    cout << student5.name << "     " << student5.age << endl;
    cout << student6.name << "     " << student6.age << endl;
    
}