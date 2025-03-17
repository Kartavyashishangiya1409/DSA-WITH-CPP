// Q2. Write a Program to perform the addition operation of two 2D arrays & store it in another array. Keep in mind that both array sizes must be the same.

#include <iostream>
using namespace std;

int main(){

    int size;

    cout << "Size of Array : ";
    cin >> size;

    int row,col;

    row = size;
    col = size;

    int a[row][col];
    int b[row][col];
    int c[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "a [" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "b [" << i << "][" << j << "] = ";
            cin >> b[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    
    

}
