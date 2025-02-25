// Write a Program to print the below Inverted Right Half Pyramid pattern using nested for loop
// 1 0 1 0 1
// 1 0 1 0 
// 1 0 1 
// 1 0 
// 1

// 1

#include <iostream>
using namespace std;

int main(){

    // 1 0 1 0 1
    // 0 1 0 1
    // 1 0 1
    // 0 1
    // 1

    for (int row = 1; row <= 5; row++) // 1 // 
    {
        for (int col = row; col <= 5; col++) // 1 0 1 0 1 //
        {
            // cout << col << " ";
            if (col % 2 == 1)
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

    
    
    

    cout << endl;





    for (int row = 5; row >= 1; row--) // 5 // 4
    {
        for (int col = 1; col <= row; col++) // 1 0 1 0 1 // 1 0 1 0
        {
            // cout << col << " ";
            if (col % 2 == 1)
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