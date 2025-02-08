// Write a Program to create an array whose size and values is defined by the user

#include <iostream>
using namespace std;

int main(){

    int size;

    cout << "Enter the size of an Array --> ";
    cin >> size;

    cout << endl;

    int user[size] = {};

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the Values for Array --> ";
        cin >> user[i];
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << user[i] << " ";
    }
    
   
    
}