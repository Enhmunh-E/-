#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k, max1 = 0;
        cin >> n >> k;
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            max1+=a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        sort(a, a+n);
        sort(b, b+n);
        if (k == 0) {
            cout << max1 << "\n";
        }else {
            int i = n-1, j = 0;
            while (k > 0 && i >= 0 && j < n) {
                if (a[j] < b[i]) {
                    int tmp = a[j];
                    a[j] = b[i];
                    b[i] = tmp;
                    j++;
                    k--;
                }
                i--;
            }
            int max = 0;
            for (int i = 0; i < n; i++) {
                max+=a[i];
            }
            cout << max << "\n";
        }
    }
}