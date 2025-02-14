// Write a Program to print the multiplication table of the number N using any type of loop

#include <iostream>
using namespace std;

int main (){

    int n, m, i;

    cout << "Enter the value of n --> ";
    cin >> n;

    cout << "Enter the Value till which you want to run the table --> ";
    cin >> m;

    for (int i = 1; i <= m; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }

}