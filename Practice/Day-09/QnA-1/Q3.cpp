// Write a Program to print the below Left Half Pyramid pattern using nested for loop.
//         5
//       4 4
//     3 3 3
//   2 2 2 2
// 1 1 1 1 1

#include <iostream>
using namespace std;

int main()
{

    for (int i = 5; i >= 1; i--) 
    {
        for (int space = 1; space < i; space++)
        {
            cout << "  ";
        }
        for (int j = i; j <= 5; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
