// Write a Program to print the below Right Half Pyramid pattern using nested for loop
// A
// B A
// C B A
// D C B A
// E D C B A

#include <iostream>
using namespace std;

int main(){

    for (char row = 65; row <= 69; row++) 
    {
        for (char col = row; col >= 65 ; col--) 
        {
            cout << col << " ";
        }
        cout << endl;
    }
}