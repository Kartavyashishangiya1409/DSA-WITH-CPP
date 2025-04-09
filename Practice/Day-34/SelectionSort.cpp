#include <iostream>
using namespace std;

int main(){

    int a[5] ={64,25,12,22,11};

    for (int i = 0; i < 5; i++)
    {
        int min = i;

        for (int j = i + 1; j < 5; j++)
        {
            if (a[min] > a[j])
            {
                min = j;
            }
        }
        if (min != i)
        {
            int first = a[i];
            a[i] = a[min];
            a[min] = first;
        }
        
    }

    cout << "Sorted Array : ";
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    
    
}
