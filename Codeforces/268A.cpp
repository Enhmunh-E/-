#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int bair[n][2];
    for (int i = 0; i < n; i++) {
        cin >> bair[i][0] >> bair[i][1];
    }
    int hed = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                if (bair[i][0] == bair[j][1]) {
                    hed++;
                }
            }
        }
    }
    cout << hed << endl;
    return 0;
}