// Value and Address of Pointer 

#include <iostream>
using namespace std;

int main(){

    int *ptr;
    int a = 10;

    ptr = &a;

    cout << "Value of a = " << *ptr << " and Address of a = " << ptr << endl;
}