#include <iostream>
using namespace std;

int main(){
    
    int num = 100;
    int &ref = num;

    cout << "Before," << endl;

    cout << "Num = " << num << endl;
    cout << "Ref = " << ref << endl << endl;

    cout << "After," << endl;
    
    ref = 20202;

    cout << "Num = " << num << endl;
    cout << "Ref = " << ref << endl;

    // A reference variable is like a nickname for something. Imagine you have a toy car, and you call it "Speedy". But your friend calls the same car "Lightning". No matter which name you use, it's still the same car.

    // In programming, a reference variable is just another name for an existing variable. If you change the value using the reference, the original also changes because they are the same thing! 
}