// Q.1 Negative Elements in 1D Array
// Develop a program that finds all the negative elements from a given 1D array.

#include <iostream>
using namespace std;

int main(){

    int rowsize,colsize;

    cout << "Enter the number of rows --> ";
    cin >> rowsize;
    cout << "Enter the number of columns --> ";
    cin >> colsize;

    int a [rowsize][colsize];

    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
            cout << "a [" << row << "] [" << col << "] = ";
            cin >> a[row][col];
        }
    }

    cout << endl;
    cout << "negative numbers form the array are :- " << endl;

    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {

            if (a[row][col] < 0)
            {
                cout << a[row][col];
            }
            else if (a[row][col] >= 0)
            {
                continue;
            }
            else
            {
                cout << "there are no negative numbers in the array" << endl;
            }
            
        }
    }
    
}
