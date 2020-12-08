#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c, n;
        cin >> a >> b >> c >> n;
        long long mx = max(a, max(b, c));
        if ((n-(mx-a+mx-b+mx-c))%3 == 0 && mx-a+mx-b+mx-c <= n) {
            cout << "YES" << "\n";
        }else {
            cout << "NO" << "\n";
        }
    }
}