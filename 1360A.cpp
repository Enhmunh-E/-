#include <iostream>
using namespace std;
int main () {   
    int n;
    cin >> n;
    while (n--) {
        int a, b;
        cin >> a >> b;
        if (a >= b) {
            if (2*b > a) {
                cout << 2*b*2*b << "\n";
            }else {
                cout << a*a << "\n";
            }
        }else {
            if (2*a > b) {
                cout << 2*a*2*a << "\n";
            }else {
                cout << b*b << "\n";
            }
        }
    }
}