#include <iostream>
using namespace std;

class Node{

    public:
        int data;
        Node *next;

};

int main(){

    Node *n1 = new Node();
    n1->data = 100;
    n1->next = NULL;
    
    Node *n2 = new Node();
    n2->data = 100;
    n2->next = NULL;
    n1->next = n2;

    Node *n3 = new Node();
    n3->data = 100;
    n3->next = NULL;
    n2->next = n3;

    Node *n4 = new Node();
    n4->data = 100;
    n4->next = NULL;
    n3->next = n4;

    Node *ptr = n1;

    while (ptr != NULL)
    {
        cout << ptr->data << "  " << ptr->next << endl;
        ptr = ptr->next;
    }

    
    
    





    
}