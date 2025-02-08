// Write a Program to find the average of a 1D array

#include <iostream>
using namespace std;

int main(){

    int size,sum;
    sum = 0;

    cout << "\nEnter the Size of an Array --> ";
    cin >> size;

    int user[size] = {};

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the values --> ";
        cin >> user[i];
    }

    cout << endl;

    for (int i = 0; i < size; i++)
    {
        cout << user[i] << " ";
    }

    for (int i = 0; i < size; i++)
    {
        sum += user[i];
    }
    cout << endl;
    cout << "\nsum = " << sum;
    cout << "\nAverage = " << sum/size;
    cout << endl << endl;

}