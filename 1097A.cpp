#include <bits/stdc++.h>
using namespace std;
int main () {
    string a, b[5];
    cin >> a;
    for (int i = 0; i < 5; i++) {
        cin >> b[i];
        if (b[i][0] == a[0] || b[i][1] == a[1]) {
            cout << "YES" << "\n";
            return 0;
        }
    }
    cout << "NO" << "\n";
    return 0;
}