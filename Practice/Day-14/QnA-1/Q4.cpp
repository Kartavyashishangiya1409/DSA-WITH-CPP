// Q.4 Sum of Elements in Row & Column of 2D Array
// Develop a Program to print and find the sum of all elements of a given row & column from a 2D array.

#include <iostream>
using namespace std;

int main(){

    int rowsize, colsize;

    cout << "The number of rows = ";
    cin >> rowsize;
    cout << "The number of columns = ";
    cin >> colsize;

    int a[rowsize][colsize];

    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            cout << "a [" << i << "] [" << j << "] = ";
            cin >> a[i][j]; 
        }
    }

    cout << endl;

    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            cout << a[i][j] << " ";
        } 
        cout << endl;
    }

    int row;

    cout << "the number of the row that you want the sum of = ";
    cin >> row;

    int sum = 0;

    for (int p = row - 1; p < row ; p++)
    {
        for (int q = 0; q < colsize; q++)
        {
            sum += a[p][q];
        }
        
    }

    cout << endl << "Sum of row values : " << sum << endl << endl;
    
}

