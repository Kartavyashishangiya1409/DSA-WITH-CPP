// Q.7 Develop a program that prints the given Custom alphabetic pattern using a nested for loop.
// * * * * *
// *       *
// * * * * *
// *
// *


#include <iostream>
using namespace std;

int main(){

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i == 2 && j > 1 && j < 5)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    for (int i = 1; i <= 2; i++)
    {
        cout << "* " << endl;
    }
    
    
}