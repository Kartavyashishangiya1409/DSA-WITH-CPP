// Write a C++ program to input electricity unit charges and calculate total electricity bill according to the given condition:
// • For first 50 units Rs. 0.50/unit
// • For next 100 units Rs. 0.75/unit
// • For next 100 units Rs. 1.20/unit
// • For unit above 250 Rs. 1.50/unit
// • An additional surcharge of 20% is added to the bill

#include <iostream>
using namespace std;

int main (){

    int U, TE, a, b, c, d, S, Tax;

    cout << "Enter the number of units --> "; 
    cin >> U;

    a = 0.50;
    b = 0.75;
    c = 1.20;
    d = 1.50;
    S = 0.2;

    if (U <= 50)
    {
        TE = U * a;
        Tax = TE * S;
        TE = TE + Tax;
        cout << TE << endl;
    }
    else
    {
        if (U <= 150)
        {
            TE = U * a * b;
            Tax = TE * S;
            TE = TE + Tax;
            cout << TE << endl;           
        }
        else
        {
            if (U <= 250)
            {
                TE = U * a * b * c;
                Tax = TE * S;
                TE = TE + Tax;
                cout << TE << endl;
            }
            else
            {
                if (U > 250)
                {
                    TE = U * a * b * c * d;
                    Tax = TE * S;
                    TE = TE + Tax;
                    cout << TE << endl;
                }
                
            }
            
        }
        
    }
    


}