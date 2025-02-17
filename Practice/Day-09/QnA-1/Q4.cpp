// Write a Program to print the below Inverted Left Half Pyramid pattern using nested for loop.
// 1 0 1 0 1
//   0 1 0 1
//     1 0 1
//       0 1
//         1

#include <iostream>
using namespace std;

int main (){

    for (int i = 1; i <= 5; i++)
    {
        for (int space = i; space > 1; space--)
        {
            cout << "  " ;
        }
        for (int j = i; j <= 5; j++)
        {
            if (j % 2 == 1)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}