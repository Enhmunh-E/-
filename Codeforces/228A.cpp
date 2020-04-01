#include <iostream>
using namespace std;
int main () {
    int a[4];
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < 3; i++) {
        for (int j = i+1; j < 4; j++) {
            if (a[i] == a[j]) {
                a[j] = 0;
            }
        }
    }
    int niit = 0;
    for (int i = 0; i < 4; i++) {
        if (a[i] == 0) {
            niit++;
        }
    }
    cout << niit << endl;
    return 0;
}