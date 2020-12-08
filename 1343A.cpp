#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long sum = 0;
        for (int k = 2; k <= 29; k++) {
            long long m = pow(2, k)-1;
            if (n % m == 0) {
                cout << n/m << "\n";
                break;
            }
        }
    }
}