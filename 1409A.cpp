#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        a = abs(a-b);
        if (a%10 == 0) {
            cout << a/10 << "\n";
        }else {
            cout << a/10 + 1 << "\n";
        }
    }
}