#include <iostream>
using namespace std;

class abc{

    public:
        string name;
        int age;


    
};

int main(){

    abc box[3] = {{"Kartavya", 18}, {"Vinit", 21}, {"Krishn", 17}};

    for (int i = 0; i < 3; i++)
    {
        cout << box[i]; 
    }
    
}

