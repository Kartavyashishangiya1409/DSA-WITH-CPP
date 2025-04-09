#include <iostream>
using namespace std;

int main() {
    int a[5] = {12, 11, 13, 5, 6};

    for (int i = 1; i < 5; i++)
    {

        int key = a[i]; 
        int j = i - 1;

        while (j >= 0 && a[j] > key) 
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < 5; i++) 
    {
        cout << a[i] << " ";
    }

    return 0;
}
