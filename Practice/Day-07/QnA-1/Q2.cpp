// Write a Program to print the factorial of number N using a for loop

#include <iostream>
using namespace std;

int main(){

    int i, n, mul = 1;

    cout << "Enter the value of n --> ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        mul = i * mul;
    }
    
    cout << "factorial of " << n << " is --> " << mul << endl;
    
}