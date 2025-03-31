// this is method-2

// This method has some error for printing the data of Node because the data keeps on overwriting

// The solution of this problem is Transversing Singly Linked List

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

    Node *current = new Node();
    current->data = 200;
    current->next = NULL;
    n1->next = current;

    current = new Node();
    current->data = 300;
    current->next = NULL;
    n1->next->next = current;

    current = new Node();
    current->data = 400;
    current->next = NULL;
    n1->next->next->next = current;

    cout << n1->data << "  " << n1->next << endl;
    cout << current->data << "  " << n1->next << endl;
    cout << current->data << "  " << n1->next->next << endl;
    cout << current->data << "  " << n1->next->next->next->next << endl;

    
    
}