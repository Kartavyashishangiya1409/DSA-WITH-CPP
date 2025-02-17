// 2️⃣ TSRN (Take Something, Return Nothing)  
// Create a function that takes an integer as input and prints whether it is even or odd.

#include <iostream>
using namespace std;

int evenodd(int n){
    if (n % 2 == 0)
    {
        cout << n << " is even" << endl;
    }
    else
    {
        cout << n << " is odd" << endl;
    }  
}
int main(){
    
    int n;

    cout << "n = ";
    cin >> n;

    evenodd(n);
}