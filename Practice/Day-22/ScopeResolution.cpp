// Scope Resolution (::) is used to access globle variables


#include <iostream>
using namespace std;

int x = 100;

int main(){

    int x = 5;

    cout << "This X is defined globally and to access that Scope Resolution (::) is used --> " << ::x << endl;
    cout << "This X is Not Defined Globally, so there is NO NEED of Scope Resolution to access this X --> " << x << endl;
}