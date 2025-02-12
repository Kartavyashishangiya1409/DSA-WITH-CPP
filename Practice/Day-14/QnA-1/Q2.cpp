// Q.2 Largest Element in 2D Array
// Develop a Program to find the largest element from a given 2D array

#include <iostream>
using namespace std;

int main(){

    int rowsize,colsize, MaxValue;

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
    MaxValue = a[0][0];

    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
            if (a[row][col] > MaxValue)
            {
                MaxValue = a[row][col];
            }
        }  
    }
    cout << "Maximum Value = " << MaxValue << endl;
    
}