// Prime or Not

#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Number : ";
    cin >> n;

    int count = 0;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        cout << n << " is a Prime Number";
    }
    else
    {
        cout << n << " is not a Prime Number";
    }
    
    
    
}