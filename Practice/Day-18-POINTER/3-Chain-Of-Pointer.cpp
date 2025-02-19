// Chain of array

#include <iostream>
using namespace std;

int main(){

    int a = 55;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    int ****ptr4 = &ptr3;
    int *****ptr5 = &ptr4;

    cout << "Value of a = " << *ptr1 << " and Address of a = " << ptr1 << endl;
    cout << "Value of ptr1 = " << *ptr1 << " and Address of ptr1 = " << ptr2 << endl;
    cout << "Value of ptr2 = " << **ptr2 << " and Address of ptr2 = " << ptr3 << endl;
    cout << "Value of ptr3 = " << ***ptr3 << " and Address of ptr3 = " << ptr4 << endl;
    cout << "Value of ptr4 = " << ****ptr4 << " and Address of ptr4 = " << ptr5 << endl;
    cout << "Value of ptr5 = " << *****ptr5 << " and Address of ptr5 = " << &ptr5 << endl;

}