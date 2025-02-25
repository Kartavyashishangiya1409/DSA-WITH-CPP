// Write a Program to print the below Right Half Pyramid pattern using nested for loop
// 5
// 4 5
// 3 4 5
// 2 3 4 5
// 1 2 3 4 5

#include <iostream>
using namespace std;

int main(){

    for (int row = 5; row >= 1; row--) // row =5
    {
        for (int col = row; col <= 5; col++) // 5
        {
            cout << col << " ";
        }
        cout << endl;
    }
    
}