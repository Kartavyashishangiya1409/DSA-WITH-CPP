#include <iostream>
using namespace std;
int main(){
    int x = 4;
    int y = 8;

    int a = 2;
    int b = 10;
    int c = 3;
    int d = 12;
    int e = 8;
    int f = 17;
    int g = 13;
    int h = 24;

    cout << x + y << endl;  // 12
    cout << x - y << endl;  // -4
    cout << x * y << endl;  // 32
    cout << x / y << endl;  // 0 or 1
    cout << x % y << endl;  // 0 (False)   // Correct ans = 4

    cout << a % b << endl;  // 2
    cout << c % d << endl;  // 3
    cout << e % f << endl;  // 8
    cout << g % h << endl;  // 13

    cout << b % a << endl;  // 10 % 2 = 0
    cout << d % c << endl;  // 12 % 3 = 0
    cout << f % e << endl;  // 17 % 8 = 1
    cout << h % g << endl;  // 24 % 13 = 11
}