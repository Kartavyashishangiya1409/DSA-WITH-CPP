// Q.3 Transpose of 2D Array
// Develop a Program to find the transpose matrix of a given 2D array.

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
    
    cout << "The matrix of Array is " << endl;
    
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            cout << a [i][j] << " ";
        } 
        cout << endl;
    }

    cout << "\nThe Transpose matrix of Array is " << endl;

    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            cout << a [j][i] << " ";
        } 
        cout << endl;
    }
    
}
