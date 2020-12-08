#include <iostream>
using namespace std;
int main () {
    int x;
    cin >> x;
    int h = 1;
    while(x / 2 != 0) {
        if (x % 2 != 0) {
            h++;
        }
        x/=2;
    }
    cout << h << endl;
    return 0;
}