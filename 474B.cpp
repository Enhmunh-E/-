#include <iostream>
using namespace std;
int main () {
    int n, m;
    cin >> n;
    int a[n];
    int s[n][2];
    int b;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i == 0) {
            s[i][0] = 1;
            s[i][1] = a[i];
            b = a[i];
        }else {
            s[i][0] = b+1;
            s[i][1] = b+a[i];
            b = a[i]+b;
        }
    }
    cin >> m;
    int q[m];
    for (int i = 0; i < m; i++) {
        cin >> q[i];
        for (int j = 0; j < n; j++) {
            if (q[i] <= s[j][2]) {
                cout << j+1 << "\n";
                j = n;
            }
        }
    }
    return 0;
}