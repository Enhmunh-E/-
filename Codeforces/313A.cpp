#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    if ( n >= 0) {
        cout << n << endl;
    }else {
        int a = n / 10;
        int b = n / 10 - (n / 10) % 10 + n % 10;
        if (a > b) {
            cout << a << endl;
        }else {
            cout << b << endl;
        }
    }
    return 0;
}