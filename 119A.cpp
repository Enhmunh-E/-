#include <iostream>
using namespace std;
int main () {
    int a, b, n;
    cin >> a >> b >> n;
    while(1 > 0) {
        while (b != 0) {
            if (b == 0) {
                n = n - a;
            }else {
                b = a % b;
                a = b;
            }
        }
        if (n <= 0) {
            cout << "0" << endl;
            return 0;
        }
        while (b != 0) {
            if (b == 0) {
                n = n - a;
            }else {
                b = a % b;
                a = b;
            }
        }
        if (n <= 0) {
            cout << "1" << endl;
            return 0;
        }
    }
}