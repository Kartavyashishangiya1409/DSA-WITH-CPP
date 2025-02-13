// Write a Program to print the sum of all numbers from 1 to N using a for loop

#include <iostream>
using namespace std;

int main(){

    int n, i, sum = 0; // 1+2+3+4+5+....+n //

    cout << "Enter the value of n --> ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        sum = i + sum;
    }
    
    cout << "sum = " << sum << endl;
    
}
