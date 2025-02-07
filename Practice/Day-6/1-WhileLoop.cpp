// It is Entry Control Loop

#include <iostream>
using namespace  std;

int main(){

    int start = 1;
    int end = 100;
    cout << "\n\nPrinting 1 to 100" << endl << endl;
    while (start <= end)
    {
        cout << start << endl;
        start++;
    }

    int a = 100;
    int b = 1;
    cout << "\n\nPrinting 100 to 1" << endl << endl;
    while (a >= b)
    {
        cout << a << endl;
        a--;
    }
}