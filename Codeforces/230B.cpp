#include <iostream>
using namespace std;
int main () {
    long n;
    cin >> n;
    long bair[n];
    for (int i = 0; i < n; i++) {
        cin >> bair[i];
    }
    for (int i = 0; i < n; i++) {
        int hed = 0;
        if (bair[i] > 100000) {
            cout << "NO" << endl;
        }else {
            for (long j = 1; j <= bair[i]; j++) {
                if (bair[i] % j == 0) {
                    hed++;
                }
            }
            if (hed == 3) {
                cout << "YES" << endl;
            }else {
                cout << "NO" << endl;
            }
        }
    }
}