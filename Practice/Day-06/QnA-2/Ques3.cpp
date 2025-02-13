// Write a Program to print even numbers from 1 to N using a do-while loop

#include <iostream>
using namespace std;

int main(){

    int i = 1, n;

    cout << "Enter the value of n --> ";
    cin >> n;

    do
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
        i++;
        
    } while (i <= n);
    
}