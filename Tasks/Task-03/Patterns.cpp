#include <iostream>
using namespace std;

int pattern1(){

    // *
    // * *
    // * * *
    // * * * *
    // * * * * *

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}
int pattern2(){

    //         *
    //       * *
    //     * * *
    //   * * * *
    // * * * * *

    for (int i = 1; i <= 5; i++)
    {
        for (int space = i; space < 5; space++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}
int pattern3(){

    //     *
    //    * *
    //   * * *
    //  * * * *
    // * * * * *

    for (int i = 1; i <= 5; i++)
    {
        for (int s = i; s < 5; s++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int pattern4(){

    // * * * * *
    // * * * *
    // * * *
    // * *
    // *

    for (int i = 5; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int pattern5(){

    // * * * * *
    //   * * * *
    //     * * *
    //       * *
    //         *

    for (int i = 5; i >= 1; i--)
    {
        for (int s = i; s < 5; s++)
        {
            cout << "  ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int pattern6(){

    // * * * * *
    //  * * * *
    //   * * *
    //    * *
    //     *

    for (int i = 5; i >= 1; i--)
    {
        for (int s = i; s < 5; s++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int pattern7(){

    // * * * * *
    //  * * * * *
    //   * * * * *
    //    * * * * *
    //     * * * * *

    for (int i = 1; i <= 5; i++)
    {
        for (int s = 1; s < i; s++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 5; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int pattern8(){

    //    *
    //   * *
    //  * * *
    // * * * *
    //  * * *
    //   * *
    //    *

    for (int i = 1; i <= 4; i++)
    {
        for (int s = i; s < 4; s++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 3; i >= 1; i--)
    {

        for (int s = i; s <= 3; s++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int pattern9(){

    // * * * *
    //  * * *
    //   * *
    //    *
    //   * *
    //  * * *
    // * * * *

    for (int i = 4; i >= 1; i--)
    {
        for (int s = i; s < 4; s++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 1; i <= 3; i++)
    {
        for (int s = i; s < 3; s++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int pattern10(){

    // * * * * *
    // *       *
    // *       *
    // *       *
    // *       *
    // * * * * *

    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i == 1 && j <= 5)
            {
                cout << "* ";
            }
            if (i > 1 && i < 6)
            {
                if (j == 1)
                {
                    cout << "* ";
                }
            }
            if (i > 1 && i < 6)
            {
                if (j > 1 && j < 5)
                {
                    cout << "  ";
                }
            }
            if (i > 1 && i < 6)
            {
                if (j == 5)
                {
                    cout << "* ";
                }
            }
            if (i == 6 && j <= 5)
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
}
int pattern11(){

    //     *
    //    * *
    //   *   *
    //  *     *
    // * * * * *

    for (int i = 1; i <= 5; i++)
    {
        for (int s = 5; s > i; s--)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {

            if (i > 2 && i < 5)
            {
                if (j == 1)
                {
                    cout << "* ";
                }
                if (j == i)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
}
int pattern12(){

    // * * * * *
    //  *     *
    //   *   *
    //    * *
    //     *

    for (int i = 5; i >= 1; i--)
    {
        for (int s = i; s < 5; s++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            // cout << "* ";

            if (i == 4 && j == 3)
            {
                cout << "  ";
            }
            else if (i == 4 && j == 2)
            {
                cout << "  ";
            }
            else if (i == 3 && j == 2)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
}
int pattern13(){

    //    *
    //   * *
    //  *   *
    // *     *
    //  *   *
    //   * *
    //    *

    int row, col, n = 4;

    cout << endl;

    for (int row = 1; row <= n; row++)
    {
        // Loop for the blanck place.
        for (int col = row; col <= n - 1; col++)
        {
            cout << " ";
        }

        // Loops for the numbers.
        for (int i = row; i >= 1; i--)
        {
            if (row == 3 && i == 2)
            {
                cout << "  ";
            }
            else if (row == 4 && i == 2)
            {
                cout << "  ";
            }
            else if (row == 4 && i == 3)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }

    for (int row = 2; row <= n; row++)
    {
        // Loop for spaces
        for (int space = 1; space < row; space++)
        {
            cout << " ";
        }

        // Loop for stars
        for (int col = row; col <= n; col++)
        {
            if (row == 2 && col == 3)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }

        cout << endl;
    }

    cout << endl;
}
int pattern14(){

    // * * * *
    //  *   *
    //   * *
    //    *
    //   * *
    //  *   *
    // * * * *


    int row, col, n = 4;

    cout << endl;

    for (int row = 1; row <= n; row++)
    {
        // Loop for spaces
        for (int space = 1; space < row; space++)
        {
            cout << " ";
        }

        // Loop for stars
        for (int col = row; col <= n; col++)
        {
            if (row == 2 && col == 3)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }

        cout << endl;
    }

    for (int row = 2; row <= n; row++)
    {
        // Loop for the blanck place.
        for (int col = row; col <= n - 1; col++)
        {
            cout << " ";
        }

        // Loops for the numbers.
        for (int i = row; i >= 1; i--)
        {
            if (row == 3 && i == 2)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }

    cout << endl;
}
int pattern15(){

    int count = 1;

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    
}
int pattern16(){

    //    1
    //   1 1
    //  1 2 1
    // 1 3 3 1

    for (int i = 1; i <= 4; i++)
    {
        for (int s = i; s < 4; s++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            if (i == 3 && j == 2)
            {
                cout << "2 ";
            }
            else if (i == 4 && j == 2)
            {
                cout << "3 ";
            }
            else if (i == 4 && j == 3)
            {
                cout << "3 ";
            }
            else
            {
                cout << "1 ";
            }
        }
        cout << endl;
    }
    
}

int main()
{

    int n;

    string loop;

    do
    {
        cout << "Pattern = ";
        cin >> n;

        cout << endl;

        switch (n)
        {
        case 1 :
            pattern1();
            break;

        case 2 :
            pattern2();
            break;
        case 3 :
            pattern3();
            break;

        case 4 :
            pattern4();
            break;

        case 5 :
            pattern5();
            break;
        case 6 :
            pattern6();
            break;

        case 7 :
            pattern7();
            break;

        case 8 :
            pattern8();
            break;

        case 9 :
            pattern9();
            break;

        case 10 :
            pattern10();
            break;

        case 11 :
            pattern11();
            break;

        case 12 :
            pattern12();
            break;

        case 13 :
            pattern13();
            break;

        case 14 :
            pattern14();
            break;

        case 15 :
            pattern15();
            break;

        case 16 :
            pattern16();
            break;

        default:
            break;
        }

        cout << endl;

        cout << "Do you want to perform again? (yes or no) --> ";
        cin >> loop;

        cout << endl;

    } while (loop == "yes");
}