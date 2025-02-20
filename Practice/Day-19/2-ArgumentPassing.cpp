#include <iostream>
using namespace std;

void Passing_A_Value(int a, int b){
    cout << "Addition = " << a + b;
}
void Passing_An_Array(int b[]){
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }
    
}
void Passing_A_Pointer(int *ptr){
    cout << "Address = " << ptr << "\nValue = " << *ptr;
}
void Passing_An_Address(int *pointer){
    cout << *pointer;
}


int main(){

    int n;
    string loop;

    do
    {
        cout << "Program no. = ";
        cin >> n;

        int a[5] = {1,2,3,4,5};
        
        int b = 15;
        int *p = &b;
        
        int c = 50;

        switch (n)
        {

        case 1 :
            Passing_A_Value(5,3);
            break;

        case 2 :
            Passing_An_Array(a);
            break;

        case 3 :
            Passing_A_Pointer(p);
            break;

        case 4 :
            Passing_An_Address(&c);
            break;
        
        default:
            break;
        }

        cout << endl;
        cout << "Do you want to perform another Program? (yes or no) --> ";
        cin >> loop;
        cout << endl;

    } while (loop == "yes");
    
}