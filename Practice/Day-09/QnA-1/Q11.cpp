// Write a Program to print the below Full Pyramid pattern using nested for loop

//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *

#include <iostream>
using namespace std;

int main(){

    for (int i = 1; i <= 5; i++)
    {
        for (int spc = 5; spc > i; spc--)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == 1)
            {
                cout << "* "; 
            }
            else if (j > 1)
            {
                cout << "* * ";
            }
        }
        cout << endl;
    }
    
}