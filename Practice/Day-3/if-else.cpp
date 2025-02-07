#include <iostream>
using namespace std;

int main()
{

    int X, Y;

    cout << "Enter value of X ";
    cin >> X;

    cout << "Enter value of Y ";
    cin >> Y;

    if ( X < Y )
    {
        cout << "X is min" << endl;
    }
    else
    {
        cout << "Y is min" << endl;
    }



    int A, B, C;

    cout << "Enter Value of A ";
    cin >> A;

    cout << "Enter Value of B ";
    cin >> B;

    cout << "Enter Value of C ";
    cin >> C;

    if (A < B)
    {
        if (A < C)
        {
            cout << "A is min" << endl;
        }
        else
        {
            cout << "C is min" << endl;
        }
    }
    else
    {
        if (B < C)
        {
            cout << "B is min" << endl;
        }
        else
        {
            cout << "C is min" << endl;
        }
    }



    int P, Q, R, S;

    cout << "Enter value of P ";
    cin >> P;

    cout << "Enter value of Q ";
    cin >> Q;

    cout << "Enter value of R ";
    cin >> R;

    cout << "Enter value of S ";
    cin >> S;

    if (P < Q)
    {
        if (P < R)
        {
            if (P < S)
            {
                cout << "P is min" << endl;
            }
            else
            {
                cout << "S is min" << endl;
            }
        }
    }
    else
    {
        if (Q < R)
        {
            if (Q < S)
            {
                cout << "Q is min" << endl;
            }
            else
            {
                cout << "S is min" << endl;
            }
        }
        else
        {
            if (R < S)
            {
                cout << "R is min" << endl;
            }
            else
            {
                cout << "S is min" << endl;
            }
        }
    }



    int E, F, G, H, I;

    cout << "Enter value of E ";
    cin >> E;

    cout << "Enter value of F ";
    cin >> F;

    cout << "Enter value of G ";
    cin >> G;

    cout << "Enter value of H ";
    cin >> H;

    cout << "Enter value of I ";
    cin >> I;

    if (E < F)
    {
        if (E < G)
        {
            if (E < H)
            {
                if (E < I)
                {
                    cout << "E is min" << endl;
                }
                else
                {
                    cout << "I is min" << endl;
                }
            }
        }
    }
    else
    {
        if (F < G)
        {
            if (F < H)
            {
                if (F < I)
                {
                    cout << "F is min" << endl;
                }
                else
                {
                    cout << "I is min" << endl;
                }
            }
        }
        else
        {
            if (G < H)
            {
                if (G < I)
                {
                    cout << "G is min" << endl;
                } 
                else
                {
                    cout << "I is min" << endl;
                }  
            }
            else
            {
                if (H < I)
                {
                    cout << "H is min" << endl;
                }
                else
                {
                    cout << "I is min" << endl;
                }
            }
        }
    }
    
    return 0;

}