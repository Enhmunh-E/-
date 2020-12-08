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
    }
    int max = 0, ii, jj;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int hed = 0;
            for (int k = i; k <= j; k++) {
                if (bair[k] == 0) {
                    hed++;
                }
            }
            for (int l = 0; l < i; l++) {
                if (bair[l] == 1) {
                    hed++;
                }
            }
            for (int l = j+1; l < n; l++) {
                if (bair[l] == 1) {
                    hed++;
                }
            }
            if (max < hed) {
                max = hed;
                // ii = i;
                // jj = j;
            }
        }
    }
    // cout << ii << " " << jj << "\n";
    cout << max << endl;
    return 0;
}