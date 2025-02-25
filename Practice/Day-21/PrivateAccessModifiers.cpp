// 01-Data-Abstraction
// --> Access Modifiers

#include <iostream>
using namespace std;

class BankBalance{
    private:
        int Balance;
        int Pin;

    public:
        
        void setter(int Balance, int Pin){
            this->Balance = Balance;
            this->Pin = Pin;
        }
        void getter(){
            cout << "Bank Balance = "<< Balance << " and Pin = " << Pin << endl; 
        }
};

int main(){

    BankBalance User1;
    User1.setter(20000,1234);
    cout << "User 1 : ";
    User1.getter();

    BankBalance User2;
    User2.setter(50000,2222);
    cout << "User 2 : ";
    User2.getter();
}