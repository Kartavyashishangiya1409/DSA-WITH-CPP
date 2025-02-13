// Write a Program to print leap years between two given numbers using a while loop

#include <iostream>
using namespace std;

int main(){

    int x;
    int y;
    // int n;
    // int m;

    cout << "Enter the value of x --> ";
    cin >> x;
    
    cout << "Enter the value of y --> ";
    cin >> y;

    cout << "\nThe Leap years Between x and y are :- " << endl;

    // n = 1;
    // m = 0;

    while (x <= y)
    {
        // cout << x << endl;
        // n++;
        // m++;
        // x = x + 4*n - 4*m;

        if (x % 4 == 0)
        {
            cout << x << endl;
        }
        x++;
        
        

    }
    
    return 0;
}