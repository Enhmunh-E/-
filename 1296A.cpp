#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], cnt=0, k = 0, oddcnt = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0) {
                cnt++;
            }else {
                oddcnt++;
            }
        }
        if (cnt == 0) {
            if (n % 2 != 0) {
                cout << "YES" << "\n";
            }else {
                cout << "NO" << "\n";
            }
        }else {
            if (oddcnt == 0) {
                cout << "NO" << "\n";
            }else {
                cout << "YES" << "\n";
            }
        }
    }
}