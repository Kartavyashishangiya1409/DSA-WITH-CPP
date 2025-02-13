#include <iostream>
using namespace std;

int main(){

    int a,b;
    char c;

    cout << "Enter value of a ";
    cin >> a;
    cout << "Enter value of b ";
    cin >> b;

    cout << "Enter one of the operation from +, -, *, /, %, => ";
    cin >> c;

    switch (c)
    {
    case '+' :
        cout << "Addition = " << a + b;
        break;
    case '-' :
        cout << "Substraction = " << a - b;
        break;
    case '*' :
        cout << "Multiplication = " << a * b;
        break;
    case '/' :
        cout << "Division = " << a / b;
        break;
    case '%' :
        cout << "Modulo = " << a % b;
        break;
    
    default:
        cout << "Please enter appropriate operation";
        break;
    }

    return 0;

}