// It is an Exit Control Loop

#include <iostream>
using namespace std;

int main(){

    int a = 1;
    int b = 100;

    cout << "\n\nPrinting 1 to 100" << endl << endl;

    do
    {
        cout << a << endl;
        a++;
    } while (a <= b);

    
    
    int c = 100;
    int d = 1;

    cout << "\n\nPrinting 100 to 1" << endl << endl;

    do
    {
        cout << c << endl;
        c--;
    } while (c >= d);
    

    
    int e = 1;
    int f = 100;

    cout << "\n\nIt is an error, \nPlease Check it out." << endl << endl;

    do
    {
        cout << e << endl;
        e++;
    } while (e >= f);
}