// Write a C++ program to input electricity unit charges and calculate total electricity bill according to the given condition:
// • For first 50 units Rs. 0.50/unit
// • For next 100 units Rs. 0.75/unit
// • For next 100 units Rs. 1.20/unit
// • For unit above 250 Rs. 1.50/unit
// • An additional surcharge of 20% is added to the bill

#include <iostream>
using namespace std;

int main()
{

    float U, TE, Tax, X, Y, Z, W, A, B, C;

    cout << "Enter the number of Units --> ";
    cin >> U;

    if (U <= 50)
    {
        X = U * 0.5;

        TE = X;
        Tax = TE * 0.2;
        TE = TE + Tax;
        cout << "Total Electricity Bill = " << TE << endl;
    }
    else
    {
        if (50 < U)
        {
            if (U <= 150)
            {
                Y = U - 50;
                X = U - Y;

                Y = Y * 0.75;
                X = X * 0.5;

                TE = X + Y;
                Tax = TE * 0.2;
                TE = TE + Tax;
                cout << "Total Electricity Bill = " << TE << endl;
            }
            else
            {
                if (150 < U)
                {
                    if (U <= 250)
                    {
                        Z = U - 50;
                        Y = Z - 100;
                        X = Z - Y;
                        W = U - X - Y;

                        W = W * 0.5;
                        X = X * 0.75;
                        Y = Y * 1.2;

                        TE = W + X + Y;
                        Tax = TE * 0.2;
                        TE = TE + Tax;
                        cout << "Total Electricity Bill = " << TE << endl;
                    }
                    else
                    {
                        if (250 < U)
                        {
                            W = U - 50;
                            Y = W - 100; 
                            X = Y - 100; 
                            C = Y - X;
                            B = Y - X;
                            A = U - W;

                            A = A * 0.5;
                            B = B * 0.75;
                            C = C * 1.2;
                            X = X * 1.5;

                            TE = X + A + B + C;
                            Tax = TE * 0.2;
                            TE = TE + Tax;
                            cout << "Total Electricity Bill = " << TE << endl;
                        }
                    }
                }
            }
        }
    }
}