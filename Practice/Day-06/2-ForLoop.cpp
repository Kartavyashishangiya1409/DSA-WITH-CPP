// It is Entry Control Loop

#include <iostream>
using namespace std;

int main(){

    int end = 100;
    cout << "\n\nPrinting 1 to 100" << endl << endl;
    for (int start = 1; start <= end; start++)
    {
        cout << start << endl;
    }

    int i;
    cout << "\n\nPrinting 100 to 1" << endl << endl;
    for (i = 100; i >= 1; i--)
    {
        cout << i << endl;
    }  
}