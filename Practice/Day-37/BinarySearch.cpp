#include <iostream>
using namespace std;

int main()
{

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

    int temp;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    cout << endl;

    cout << "Sorted Array : ";

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl
         << endl;

    int SearchKey;

    cout << "Enter Search Key : ";
    cin >> SearchKey;

    cout << endl;

    int low = 0;
    int high = size - 1;
    int mid = (low + high) / 2;

    // 1 2 3 4 5 6 7 8
    // SearchKey = 2

    bool key = false;
    int position = -1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (SearchKey < a[mid])
        {
            high = mid - 1;
        }
        else if (SearchKey == a[mid])
        {
            key = true;
            position = mid;
            break;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (key)
    {
        cout << SearchKey << " is Present at a[" << position << "] in the Array" << endl;
    }
    else
    {
        cout << SearchKey << " is not Present in the Array" << endl;
    }

    cout << endl;

}