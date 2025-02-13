// Create a menu-based program to perform CRUD Operations on given 1D Array

#include <iostream>
using namespace std;

int main()
{

    // int a[5] = {1, 2, 3, 4, 5};
    int user, size;

    cout << "Enter the size of array --> ";
    cin >> size;

    int a[size];

    do
    {

        cout << "\nEnter 1 to Create," << endl
             << "Enter 2 to Read," << endl
             << "Enter 3 to Update," << endl
             << "Enter 4 to Delete" << endl
             << "Enter 5 to Quit" << endl << endl;

        cout << "Enter the value for user --> ";
        cin >> user;

        switch (user)
        {

        case 1:

            cout << "\nCreate record\n"
                 << endl;
            for (int i = 0; i < size; i++)
            {
                cout << "Enter a [" << i << "] = ";
                cin >> a[i];
            }
            break;

        case 2:

            cout << "\nRead Record\n"
                 << endl;
            for (int i = 0; i < size; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
            break;

        case 3:

            cout << "\nUpdate Record\n"
                 << endl;

            int position, value;
            cout << "Enter the Position you want to change --> ";
            cin >> position;
            cout << "Enter the Value you want to change --> ";
            cin >> value;

            a[position - 1] = value;
            break;

        case 4:
            cout << "\nDelete Record\n"
                 << endl;

            int pos;
            cout << "Enter the index number you want to change --> ";
            cin >> pos;

            for (int i = pos; i < size; i++)
            {
                a[i] = a[i + 1];
                size--;
            }
            break;

        case 5:
            break;
            break;

        default:
            cout << "Please Enter the Correct Opperation";
            break;
        }
    } while (user != 5);
}