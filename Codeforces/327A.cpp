#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int bair[n];
    int h = 0;
    int f = 0;
    for (int i = 0; i < n; i++) {
        cin >> bair[i];
        if (h == 0 && bair[i] == 0) {
            f = i;
            h = 1;
        }
    }
    int s = 0;
    for (int i = n-1; i >= 0; i--) {
        if (bair[i] == 0) {
            s = i;
            break;
        }
    }
    for (int i = f; i <= s; i++) {
        if (bair[i] == 0) {
            bair[i] = 1;
        }else {
            bair[i] = 0;
        }
    }
    int hed = 0;
    for (int i = 0; i < n; i++) {
        if (bair[i] == 1) {
            hed++;
        }
    }
    cout << hed << endl;
    return 0;
}