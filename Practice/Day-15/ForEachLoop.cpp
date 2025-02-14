#include <iostream>
using namespace std;

int main(){

    int a[5] = {1, 2, 3, 4, 5};

    for (int i : a)
    {
        cout << i << " ";
    }
    
    cout << endl;
    
    int size;
    cout << "Enter the size of Array --> ";
    cin >> size;

    int b[size];


    for (int x = 0; x < size; x++)
    {
        cout << "a [" << x << "] = ";
        cin >> b[x]; 
    }
    

    for (int j : b)
    {
        cout << j << " " << endl;
    }
    
    

}