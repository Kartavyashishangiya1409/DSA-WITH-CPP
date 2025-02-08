// Write a Program to perform the addition operation of two 1D arrays & store it in another array. Keep in mind that both array sizes must be the same

#include <iostream>
using namespace std;

int main(){

    int size;

    cout << "\nEnter the size of all Arrays --> ";
    cin >> size;

    cout << endl;

    int a[size] = {};

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the Values for a --> ";
        cin >> a[i];
    }
    cout << endl;
    cout << "Array a = ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << endl;
    

    int b[size] = {};

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the Values for b --> ";
        cin >> b[i];
    }
    cout << endl;
    cout << "Array b = ";
    for (int i = 0; i < size; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    cout << endl;

    cout << "Now," << endl;
    cout << "for Array c," << endl;
    cout << "c[i] = a[i] + b[i]" << endl << endl;
    cout << "Therefore," << endl;
    cout << "Array c = ";

    int c[size] = {};
    
    for (int i = 0; i < size; i++)
    {
        c[i] = a[i] + b[i];
        cout << c[i] << " ";
    }
    cout << endl << endl;    
    
}