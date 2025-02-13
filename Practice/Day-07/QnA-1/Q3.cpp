// Write a Program to print the multiplication table of the number N using any type of loop

#include <iostream>
using namespace std;

int main (){

    int n, i;

    cout << "Enter the value of n --> ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        n = 0;
        n++;
        n = i * n;
        cout << n << endl;
    }
    
}