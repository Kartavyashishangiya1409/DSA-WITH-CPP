// Write a Program to print odd numbers from N to 1 using a while loop

#include <iostream>
using namespace std;

int main(){

    int i = 1;
    int n;
    // int x;

    cout << "Enter the value of n --> ";
    cin >> n;

    // x=n;

    while (n >= i)
    {
        // cout << n << endl;
        // n = 2*x - 1;
        // n--;
        // n--;

        if (n % 2 == 1)
        {
            cout << n << endl;
        }
        n--;
        
    }
    
}