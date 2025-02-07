// Write a Program to print the Fibonacci series up to N numbers using a for loop

#include <iostream>
using namespace std;

int main(){

    // 0,1,1,2,3,5,8,13,.....

    // 0 + 0 
    // 1 + -1
    // -1 + 1

    int a, b, n, temp;

    a = 1;
    b = -1;

    cout << "enter the value of n --> ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        cout << temp << endl;
        temp = a + b;
        b = a;
        a = temp;
    }
    

    
}