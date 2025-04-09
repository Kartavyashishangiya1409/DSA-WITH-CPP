#include <iostream>
using namespace std;


int main(){

    cout << endl;
    
    int size;

    cout << "size of Array : ";
    cin >> size;

    cout << endl;
    
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
    
    cout << endl << endl;

    int SearchKey;

    cout << "Enter Search Key : ";
    cin >> SearchKey;

    cout << endl;

    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (SearchKey == a[i])
        {
            cout << SearchKey << " is present at a [" << i << "]" << endl;
            break;
        }  
        else
        {
            count++;
        }
    }

    if (count == 0)
    {
        cout << SearchKey << " is not present in this Array" << endl;
    }

    cout << endl;

}