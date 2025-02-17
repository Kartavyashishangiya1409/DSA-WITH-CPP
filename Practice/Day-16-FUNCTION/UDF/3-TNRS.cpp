#include <iostream>
using namespace std;

int hello(int a = 10){
    return a;
}
int main(){
    cout << hello();
}