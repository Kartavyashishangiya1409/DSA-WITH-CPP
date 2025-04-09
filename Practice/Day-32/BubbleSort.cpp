#include <iostream>
using namespace std;

int main(){

    int a[5] = {4,9,3,7,1};
    int x;

    for (int  i = 0; i < 5; i++)
    {
        for (int j = i + 1; j <= 5; j++)
        {
            if (a[i] > a[j])
            {
                x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
            
        }
    }

    cout << "Sorted Array : ";
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    
    
}