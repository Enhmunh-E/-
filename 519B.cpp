#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int n;
    cin >> n;
    int a[n], b[n-1], c[n-2];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n-1; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n-2; i++) {
        cin >> c[i];
    }
    int d = n-1;
    int e = n-2;
    sort(a, a+n);
    sort(b, b+d);
    sort(c, c+e);
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            cout << a[i] << endl;
            break;
        }
    }
    for (int i = 0; i < n-1; i++) {
        if (b[i] != c[i]) {
            cout << b[i] << endl;
            break;
        }
    }
}