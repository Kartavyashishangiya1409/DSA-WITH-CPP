#include <iostream>
using namespace std;

class Node{

    public:
        int data;
        Node *next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

int main(){

    Node *n1 = new Node(100);
    Node *n2 = new Node(200);
    Node *n3 = new Node(300);
    Node *n4 = new Node(400);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    Node *ptr = n1;

    while (ptr != NULL)
    {
        cout << ptr->data << "  " << ptr->next << endl;
        ptr = ptr->next;
    }

    
    
    





    
}