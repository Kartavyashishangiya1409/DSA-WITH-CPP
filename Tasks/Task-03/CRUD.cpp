#include <iostream>
using namespace std;

void create(int b[]){
    
    for (int i = 0; i < 5; i++)
    {
        cout << "a [" << i << "] = ";
        cin >> b[i];
    }
    
}

void read(int b[]){
    
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }

    
}

void update(int b[]){

    int i, position, value;

    cout << "Position : ";
    cin >> position;

    cout << "Value : ";
    cin >> value;

    b[position - 1] = value;

}

void remove(int b[]){
    
    int position;

    cout << "Enter the Position you want to delete : ";
    cin >> position;

    int size = 5;

    for (int i = position; i < size; i++)
    {
        b[i] = b[i + 1];
        size--;
    }
    
}

int main(){
    
    int n;
    int a[5] = {};
    
    string loop;
    
    do
    {
        
        cout << "Enter 1 to Create" << endl;
        cout << "Enter 2 to Read" << endl;
        cout << "Enter 3 to Update" << endl;
        cout << "Enter 4 to Delete" << endl;
        
        cout << endl;
        
        cout << "Task = ";
        cin >> n;
        
        cout << endl;
        
        switch (n)
        {
            case 1 :
                create(a);
                break;
            
            case 2 :
                read(a);
                cout << endl;
                break;

            case 3 :
                update(a);
                break;

            case 4 :
                remove(a);
                break;
        
            default:
                break;
        }
        
        cout << endl;
        
        cout << "do you want to run this loop again? (yes or no) : ";
        cin >> loop;

        cout << endl;

    } while (loop == "yes");

    cout << "OK,\nNo Problem...!" << endl << endl;
    


    
}