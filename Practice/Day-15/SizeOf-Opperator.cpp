// - Declare an integer **1D array** with 6 elements.
// - Use the **sizeof() operator** to:
//   1. Find the total size of the array.
//   2. Find the size of a single element.
//   3. Calculate the total number of elements in the array.

#include <iostream>
using namespace std;

void print1(int n = 1){

    int size;

    cout << endl << "Running Print1" << endl << endl;

    cout << "The size of Array = ";
    cin >> size;

    int a[size];

    for (int i = 0; i < size; i++)
    {
        cout << "a [" << i << "] = ";
        cin >> a[i];
    }

    cout << endl;

    for (int i : a)
    {
        cout << i << " ";
    }

    cout << endl << endl;
    cout << "the size of array in terms of bytes = " << sizeof(a) << endl;
}
void print2(int n = 2){

    int size;

    cout << endl << "Running Print2" << endl << endl;

    cout << "The size of Array = ";
    cin >> size;

    int a[size];

    for (int i = 0; i < size; i++)
    {
        cout << "a [" << i << "] = ";
        cin >> a[i];
    }

    cout << endl;

    for (int i : a)
    {
        cout << i << " ";
    }

    cout << endl
         << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "The size of a[" << i << "]" << " = " << a[i] << " in terms of bytes = " << sizeof(i) << endl;
    }
}
void print3(int n = 3){

    int size;

    cout << endl << "Running Print3" << endl << endl;

    cout << "The size of Array = ";
    cin >> size;

    int a[size];

    for (int i = 0; i < size; i++)
    {
        cout << "a [" << i << "] = ";
        cin >> a[i];
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl << endl << "The Total number of elements in the Array = " << size << endl;
}

int main() 
{
    string again;

    do
    {
        int n;
        
        cout << endl << "Enter the code number that you want to print from 1, 2 & 3 --> ";
        cin >> n;

        switch (n)
        {
        case 1:
            print1();
            break;

        case 2:
            print2();
            break;

        case 3:
            print3();
            break;

        default:
            cout << "Please enter the number from 1, 2 & 3";
            break;
        }

        cout << endl << "Do you want to check Another code? (yes or no) --> ";
        cin >> again;

    } while (again == "yes" || again == "Yes" || again == "YES");

    cout << endl << "OK, \nNo Problem" << endl << endl;
}