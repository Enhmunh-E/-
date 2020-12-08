#include <iostream>
using namespace std;
int main () {
    int n, t;
    cin >> n >> t;
    int a[n+1];
    for (int i = 1; i <= n-1; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n-1;) {
        if (a[i]+i == t) {
            cout << "YES" << "\n";
            return 0;
        }else if (a[i]+i > t) {
            cout << "NO" << "\n";
            return 0;
        }
        i = a[i]+i;
    }
    cout << "NO" << "\n";
    return 0;
}