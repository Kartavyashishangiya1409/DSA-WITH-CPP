#include <iostream>
using namespace std;

int main(){

    int rowsize, colsize;

    cout << "Row Size = ";
    cin >> rowsize;
    cout << "Col Size = ";
    cin >> colsize;

    int a[rowsize][colsize];

    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
            cout << "a [" << row << "] [" << col << "] = ";
            cin >> a[row][col];
        }
    }

    cout << "-------------" << endl;
    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
            // cout << "a [" << row << "] [" << col << "] = " << a[row][col] << endl;
            // cout << a[rowsize][colsize] << " " << endl;
            cout << a[row][col] << " ";

        }
        cout << endl;
    }
    
    
}