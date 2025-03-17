// Q1. Write a Program to find the average of a given 2D array.

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

    float sum = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum = sum + a[i][j];
        }
    }

    cout << "\nAverage of this Array : " << sum / (row * col);
    
    
    
}