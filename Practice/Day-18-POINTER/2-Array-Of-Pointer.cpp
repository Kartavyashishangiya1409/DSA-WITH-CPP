// Value and Address of Array Pointer

#include <iostream>
using namespace std;

int main(){

    int size;

    cout << "Size of Array = ";
    cin >> size;
    
    int *ptr[size];
    int a[size];

    for (int i = 0; i < size; i++)
    {
        cout << "a [" << i << "] = ";
        cin >> a[i];

        ptr[i] = &a[i];
    }

    cout << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Value of a [" << i << "] = " << *ptr[i] << " and Address of a[" << i << "] = " << ptr[i] << endl;
    }

    cout << endl;
    
    
}