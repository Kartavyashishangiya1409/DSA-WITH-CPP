// Write a program that reverses the order of elements in a given 1D array.

#include <iostream>
using namespace std;

int main(){

    int size;

    cout << "Size of Array : ";
    cin >> size;

    int a[size];

    for (int i = 0; i < size; i++)
    {
        cout << "a [" << i << "] = ";
        cin >> a[i];
    }

    cout << endl;
    cout << "Array : ";

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
    cout << "Reverse Array : ";

    for (int i = size - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
    
    
    
}