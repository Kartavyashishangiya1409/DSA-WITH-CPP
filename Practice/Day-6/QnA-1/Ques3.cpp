// Write a Program to print 1 to N using a while loop

#include <iostream>
using namespace std;

int main(){

    int i = 1;
    int n;

    cout << "Enter the value of n --> ";
    cin >> n;

    while (i <= n)
    {
        cout << i << endl;
        i++;
    }
    
}