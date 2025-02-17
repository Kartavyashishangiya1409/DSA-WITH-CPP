#include <iostream>
using namespace std;

int power(int a){
    return a * a * a;
}
int main(){
    cout << "cube = " << power(4) << endl;
    return 0;
}