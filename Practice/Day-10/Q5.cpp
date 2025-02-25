// Q.5 Develop a program that prints the given Full Pyramid pattern using a nested for loop.
//         5
//       4 5 4
//     3 4 5 4 3
//   2 3 4 5 4 3 2
// 1 2 3 4 5 4 3 2 1
#include <iostream>
using namespace std;

int main(){

    for (int i = 5; i >= 1; i--)
    {
        for (int spc = i; spc > 1; spc--)
        {
            cout << "  ";
        }
        for (int j = i; j <= 5; j++)
        {
            cout << j << " ";
        }
        for (int j = 5 - 1; j >= i; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    
}