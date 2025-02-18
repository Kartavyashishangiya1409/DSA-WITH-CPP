// Q.1 Calculator
// Develop a menu-driven program to implement arithmetic operations such as +, -, *, /, and % using UDF, switch case, and looping. Make sure that the program is endless until a certain letter is pressed.

#include <iostream>
using namespace std;

int calculator()
{

    int a, b;
    char c;

    string again;

    do
    {
        
        cout << "a = ";
        cin >> a;
        
        cout << "b = ";
        cin >> b;
        
        cout << "\nEnter '+' for Addition\nEnter '-' for Substraction\nEnter '*' for Multiplication\nEnter '/' for Division\nEnter '%' for Modulo" << endl << endl;

        cout << "Enter the opperator --> ";
        cin >> c;

        switch (c)
        {
        case '+':
            cout << "Addition of " << a << " and " << b << " = " << a + b << endl;
            break;

        case '-':
            cout << "Substraction of " << a << " and " << b << " = " << a - b << endl;
            break;

        case '*':
            cout << "Multiplication of " << a << " and " << b << " = " << a * b << endl;
            break;

        case '/':
            cout << "Division of " << a << " and " << b << " = " << a / b << endl;
            break;

        case '%':
            cout << "Modulo of " << a << " and " << b << " = " << a % b << endl;
            break;

        default:
            break;
        }

        cout << "Do you want to run again? (yes or no) --> ";
        cin >> again;

    } while (again == "yes" || again == "Yes" || again == "YES");

    cout << "OK \nNo Problem...!" << endl;
}

int main(){
    calculator();
}