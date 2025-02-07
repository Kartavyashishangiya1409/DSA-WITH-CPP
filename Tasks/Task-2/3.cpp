#include <iostream>
using namespace std;

int main()
{

    int U;

    cout << "Enter the value of Units --> ";
    cin >> U;

    if (U <= 50)
    {
        cout << "U is Less than 50" << endl;
    }
    else
    {
        if (50 < U)
        {
            if (U <= 150)
            {
                cout << "U is in between 50 and 150" << endl;
            }
            else
            {
                if (150 < U)
                {
                    if (U <= 250)
                    {
                        cout << "Hellooooooooooo" << endl;
                    }
                    else
                    {
                        if (250 < U)
                        {
                            cout << "HIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII" << endl;
                        }
                        
                    }
                }
            }
        }
    }
}